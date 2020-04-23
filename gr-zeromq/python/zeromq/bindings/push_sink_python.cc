/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/zeromq/push_sink.h>
// pydoc.h is automatically generated in the build directory
#include <push_sink_pydoc.h>

void bind_push_sink(py::module& m)
{

    using push_sink = ::gr::zeromq::push_sink;


    py::class_<push_sink,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<push_sink>>(m, "push_sink", D(push_sink))

        .def(py::init(&push_sink::make),
             py::arg("itemsize"),
             py::arg("vlen"),
             py::arg("address"),
             py::arg("timeout") = 100,
             py::arg("pass_tags") = false,
             py::arg("hwm") = -1,
             D(push_sink, make))


        .def("last_endpoint", &push_sink::last_endpoint, D(push_sink, last_endpoint))

        ;
}
