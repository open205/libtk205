[![Build and Test](https://github.com/open205/libtk205/actions/workflows/build-and-test.yml/badge.svg)](https://github.com/open205/libtk205/actions/workflows/build-and-test.yml)

libtk205
===========

A C++ library autogenerated from the current version of the ASHRAE Standard 205P data exchange specification. The C++ template code is available in the ASHRAE 205 [toolkit](https://github.com/open205/toolkit-205.git), which also provides cross-format translation of ASHRAE205 schema and examples.

**Disclaimer:** While this library is developed in conjunction with the ASHRAE Standard 205 project committee, it is not an official ASHRAE product or a part of the standard.

About ASHRAE 205
----------------

ASHRAE Standard 205 is "Standard Representation of Performance Simulation Data for HVAC&R and Other Facility Equipment". While the standard is not yet published, public reviews are available at [ASHRAE's online review portal](https://osr.ashrae.org/default.aspx).

The stated purpose of ASHRAE Standard 205 is:

> To facilitate sharing of equipment characteristics for performance simulation by defining standard representations such as data models, data formats, and automation interfaces.

The Standard is intended to support the following use cases:

- **Data Publication** Data publishers (typically equipment manufacturers) use representation specifications to guide implementation of data writing and validity testing software that produces correctly-formed representation files.

- **Application Development** Application developers use representation specifications to guide implementation of software that correctly reads representation data. Such implementations may include validity tests and developers may use representation specification example data for testing purposes.

- **Data Application** Application users use representation specifications to understand and check representation data. Data exchange will generally be automated but the availability of representation specifications facilitates additional data checking when needed.

Generally, a data publisher (e.g., manufacturer) provides an ASHRAE Standard 205 representation of a specific piece of equipment that the application user can load into compliant performance simulation software.

Building libtk205
--------------------

To build the library, use

`cmake -B build` 

to generate build files for an "out-of-source" build directory, then

`cmake --build build --config [Debug/Release]`

to build libtk205.

Testing the library is possible using

`cd build && ctest`

Example Usage
-------------

The client is responsible for the allocation and management of pointer(s) to representation(s). A representation pointer may be a direct subclass pointer, as in `std::shared_ptr<tk205::rs0001_ns::RS0001> Representation`, or a pointer to the base class `tk205::RSInstanceBase`.*libtk205* uses a factory pattern to create and populate instances of a representation, which can be assigned to this pointer.

Once the instance is created, any of its public members are available through the pointer interface. Critically, the `calculate_performance` overloaded function returns the equipment performance at a particular set of grid variables. See ASHRAE 205 for details.

The client may optionally register a callback function that handles libtk205 errors (strings) in the preferred way:

`void tk205ErrorHandler(tk205::MsgSeverity message_type, const std::string &message, void *context_ptr);`

