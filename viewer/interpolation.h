#pragma once

#include "posture.h"
#include "vector.h"

class Interpolation {
 public:
   Interpolation(Posture p1, Posture p2, Posture p3, Posture p4);

   Posture operator()(float t);

 private:
   Posture p1, p2, p3, p4, intermediate;
   float interp;

   static const float tau;

   void interpolate_root();
   void interpolate_bones();
   void interpolate_bone(int i);
   void interpolate_bone_rotation(int i);
   void interpolate_bone_translation(int i);
   void interpolate_bone_length(int i);
   whyNameThisClassTheSameAsSTDvectorThatIsDumb catmull_rom(whyNameThisClassTheSameAsSTDvectorThatIsDumb v1, whyNameThisClassTheSameAsSTDvectorThatIsDumb v2, whyNameThisClassTheSameAsSTDvectorThatIsDumb v3, whyNameThisClassTheSameAsSTDvectorThatIsDumb v4);
};

