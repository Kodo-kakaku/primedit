#pragma once

#include <memory>
#include <vector>

#include "primitive.h"

class Document
{
private:
    // del pointer
    std::vector<Primitive> primitives;

public:
    Document() {}
    ~Document() {}

    std::unique_ptr<Primitive> AddPrimitive([[maybe_unused]] Primitive prim) {
        return nullptr;
    }

    void DeletePrimitive([[maybe_unused]] std::unique_ptr<Primitive> &prim) {
        return;
    }
};


