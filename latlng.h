#ifndef NODES2LATLNG_HPP
#define NODES2LATLNG_HPP

#include <node.h>
#include "s2latlng.h"

class LatLng : public node::ObjectWrap {
public:
    static v8::Persistent<v8::FunctionTemplate> constructor;
    static void Init(v8::Handle<v8::Object> target);
    inline S2LatLng get() { return this_; }
    static v8::Handle<v8::Value> New(const S2LatLng ll);

protected:
    LatLng();

    static v8::Handle<v8::Value> New(const v8::Arguments& args);
    static v8::Handle<v8::Value> Lat(const v8::Arguments& args);
    static v8::Handle<v8::Value> Lng(const v8::Arguments& args);
    static v8::Handle<v8::Value> IsValid(const v8::Arguments& args);
    static v8::Handle<v8::Value> Normalized(const v8::Arguments& args);

    S2LatLng this_;
};

#endif