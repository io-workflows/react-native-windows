
/*
 * This file is auto-generated from a NativeModule spec file in js.
 *
 * This is a C++ Spec class that should be used with MakeTurboModuleProvider to register native modules
 * in a way that also verifies at compile time that the native module matches the interface required
 * by the TurboModule JS spec.
 */
#pragma once

#include "NativeModules.h"
#include <tuple>

namespace Microsoft::ReactNativeSpecs {

REACT_STRUCT(PermissionsAndroidSpec_requestMultiplePermissions_returnType)
struct PermissionsAndroidSpec_requestMultiplePermissions_returnType {
    REACT_FIELD(permission)
    ::React::JSValue permission;
};

struct PermissionsAndroidSpec : winrt::Microsoft::ReactNative::TurboModuleSpec {
  static constexpr auto methods = std::tuple{
      Method<void(std::string, Promise<bool>) noexcept>{0, L"checkPermission"},
      Method<void(std::string, Promise<std::string>) noexcept>{1, L"requestPermission"},
      Method<void(std::string, Promise<bool>) noexcept>{2, L"shouldShowRequestPermissionRationale"},
      Method<void(std::vector<std::string>, Promise<PermissionsAndroidSpec_requestMultiplePermissions_returnType>) noexcept>{3, L"requestMultiplePermissions"},
  };

  template <class TModule>
  static constexpr void ValidateModule() noexcept {
    constexpr auto methodCheckResults = CheckMethods<TModule, PermissionsAndroidSpec>();

    REACT_SHOW_METHOD_SPEC_ERRORS(
          0,
          "checkPermission",
          "    REACT_METHOD(checkPermission) void checkPermission(std::string permission, ::React::ReactPromise<bool> &&result) noexcept { /* implementation */ }\n"
          "    REACT_METHOD(checkPermission) static void checkPermission(std::string permission, ::React::ReactPromise<bool> &&result) noexcept { /* implementation */ }\n");
    REACT_SHOW_METHOD_SPEC_ERRORS(
          1,
          "requestPermission",
          "    REACT_METHOD(requestPermission) void requestPermission(std::string permission, ::React::ReactPromise<std::string> &&result) noexcept { /* implementation */ }\n"
          "    REACT_METHOD(requestPermission) static void requestPermission(std::string permission, ::React::ReactPromise<std::string> &&result) noexcept { /* implementation */ }\n");
    REACT_SHOW_METHOD_SPEC_ERRORS(
          2,
          "shouldShowRequestPermissionRationale",
          "    REACT_METHOD(shouldShowRequestPermissionRationale) void shouldShowRequestPermissionRationale(std::string permission, ::React::ReactPromise<bool> &&result) noexcept { /* implementation */ }\n"
          "    REACT_METHOD(shouldShowRequestPermissionRationale) static void shouldShowRequestPermissionRationale(std::string permission, ::React::ReactPromise<bool> &&result) noexcept { /* implementation */ }\n");
    REACT_SHOW_METHOD_SPEC_ERRORS(
          3,
          "requestMultiplePermissions",
          "    REACT_METHOD(requestMultiplePermissions) void requestMultiplePermissions(std::vector<std::string> const & permissions, ::React::ReactPromise<PermissionsAndroidSpec_requestMultiplePermissions_returnType> &&result) noexcept { /* implementation */ }\n"
          "    REACT_METHOD(requestMultiplePermissions) static void requestMultiplePermissions(std::vector<std::string> const & permissions, ::React::ReactPromise<PermissionsAndroidSpec_requestMultiplePermissions_returnType> &&result) noexcept { /* implementation */ }\n");
  }
};

} // namespace Microsoft::ReactNativeSpecs
