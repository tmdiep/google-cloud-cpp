# Dialogflow CX API C++ Client Library

This directory contains an idiomatic C++ client library for the
[Dialogflow CX API][cloud-service-docs], a service to build conversational
interfaces (for example, chatbots, and voice-powered apps and devices).
There are [two editions] of Dialogflow, this library supports the CX edition.

While this library is **GA**, please note that the Google Cloud C++ client libraries do **not** follow
[Semantic Versioning](https://semver.org/).

## Supported Platforms

- Windows, macOS, Linux
- C++14 (and higher) compilers (we test with GCC >= 7.3, Clang >= 6.0, and
  MSVC >= 2017)
- Environments with or without exceptions
- Bazel (>= 4.0) and CMake (>= 3.5) builds

## Documentation

- Official documentation about the [Dialogflow API][cloud-service-docs] service
- [Reference doxygen documentation][doxygen-link] for each release of this
  client library
- Detailed header comments in our [public `.h`][source-link] files

## Quickstart

The [quickstart/](quickstart/README.md) directory contains a minimal environment
to get started using this client library in a larger project. The following
"Hello World" program is used in this quickstart, and should give you a taste of
this library.

<!-- inject-quickstart-start -->

```cc
#include "google/cloud/dialogflow_cx/agents_client.h"
#include <iostream>

int main(int argc, char* argv[]) try {
  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " project-id region-id\n";
    return 1;
  }
  auto const project = std::string{argv[1]};
  auto const region = std::string{argv[2]};

  namespace dialogflow_cx = ::google::cloud::dialogflow_cx;
  auto client =
      dialogflow_cx::AgentsClient(dialogflow_cx::MakeAgentsConnection(region));

  auto const location = "projects/" + project + "/locations/" + region;
  for (auto a : client.ListAgents(location)) {
    if (!a) throw std::move(a).status();
    std::cout << a->DebugString() << "\n";
  }

  return 0;
} catch (google::cloud::Status const& status) {
  std::cerr << "google::cloud::Status thrown: " << status << "\n";
  return 1;
}
```

<!-- inject-quickstart-end -->

- Packaging maintainers or developers who prefer to install the library in a
  fixed directory (such as `/usr/local` or `/opt`) should consult the
  [packaging guide](/doc/packaging.md).
- Developers wanting to use the libraries as part of a larger CMake or Bazel
  project should consult the [quickstart guides](#quickstart) for the library
  or libraries they want to use.
- Developers wanting to compile the library just to run some examples or
  tests should read the current document.
- Contributors and developers to `google-cloud-cpp` should consult the guide to
  [setup a development workstation][howto-setup-dev-workstation].

## Contributing changes

See [`CONTRIBUTING.md`](/CONTRIBUTING.md) for details on how to
contribute to this project, including how to build and test your changes
as well as how to properly format your code.

## Licensing

Apache 2.0; see [`LICENSE`](/LICENSE) for details.

[cloud-service-docs]: https://cloud.google.com/dialogflow/cx/docs
[doxygen-link]: https://googleapis.dev/cpp/google-cloud-dialogflow_cx/latest/
[howto-setup-dev-workstation]: /doc/contributor/howto-guide-setup-development-workstation.md
[source-link]: https://github.com/googleapis/google-cloud-cpp/tree/main/google/cloud/dialogflow_cx
[two editions]: https://cloud.google.com/dialogflow/docs/editions
