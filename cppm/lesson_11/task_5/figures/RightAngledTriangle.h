#ifndef TASK_3_RIGHTANGLEDTRIANGLE_H
#define TASK_3_RIGHTANGLEDTRIANGLE_H

#include "Triangle.h"
#include "ExportImport.h"

class FIGURES_API RightAngledTriangle : public Triangle {
public:
    RightAngledTriangle(double a, double b, double c, double angleA, double angleB);
};

#endif //TASK_3_RIGHTANGLEDTRIANGLE_H