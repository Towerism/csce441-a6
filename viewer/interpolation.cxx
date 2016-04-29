#include "interpolation.h"

const float Interpolation::tau = 0.5;

Interpolation::Interpolation(Posture p1, Posture p2, Posture p3, Posture p4)
  : p1(p1), p2(p2), p3(p3), p4(p4) {}

Posture Interpolation::operator()(float t) {
  interp = t;
  interpolate_root();
  interpolate_bones();
  return intermediate;
}

void Interpolation::interpolate_root() {
  intermediate.root_pos = catmull_rom(
    p1.root_pos, p2.root_pos, p3.root_pos, p4.root_pos);
}

void Interpolation::interpolate_bones() {
  for (int i = 0; i < MAX_BONES_IN_ASF_FILE; ++i)
    interpolate_bone(i);
}

void Interpolation::interpolate_bone(int i) {
  interpolate_bone_rotation(i);
  interpolate_bone_translation(i);
  interpolate_bone_length(i);
}

void Interpolation::interpolate_bone_rotation(int i) {
  intermediate.bone_rotation[i] = catmull_rom(
    p1.bone_rotation[i],
    p2.bone_rotation[i],
    p3.bone_rotation[i],
    p4.bone_rotation[i]
    );
}

void Interpolation::interpolate_bone_translation(int i) {
  intermediate.bone_translation[i] = catmull_rom(
    p1.bone_translation[i],
    p2.bone_translation[i],
    p3.bone_translation[i],
    p4.bone_translation[i]
    );
}

void Interpolation::interpolate_bone_length(int i) {
  intermediate.bone_length[i] = catmull_rom(
    p1.bone_length[i],
    p2.bone_length[i],
    p3.bone_length[i],
    p4.bone_length[i]
    );
}

whyNameThisClassTheSameAsSTDvectorThatIsDumb Interpolation::catmull_rom(whyNameThisClassTheSameAsSTDvectorThatIsDumb v1, whyNameThisClassTheSameAsSTDvectorThatIsDumb v2, whyNameThisClassTheSameAsSTDvectorThatIsDumb v3, whyNameThisClassTheSameAsSTDvectorThatIsDumb v4) {
  float interp_a = interp*interp;
  float interp_b = interp_a*interp;

  float M1 = -tau*interp_b + 2 * tau*interp_a - tau*interp;
  float M2 = (2 - tau)*interp_b + (tau - 3)*interp_a + 1;
  float M3 = (tau - 2)*interp_b + (3 - 2 * tau)*interp_a + tau*interp;
  float M4 = tau*interp_b - tau*interp_a;

  return (v1 * M1) + (v2 * M2) + (v3 * M3) + (v4 * M4);
}

