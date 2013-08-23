/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
#ifndef FLYVR_INVALID_BOUNDS_CALLBACK
#define FLYVR_INVALID_BOUNDS_CALLBACK

#include <osg/Drawable>

class InvalidBoundsCallback : public osg::Drawable::ComputeBoundingBoxCallback
{
  osg::BoundingBox computeBound(const osg::Drawable&) const;
};

#endif
