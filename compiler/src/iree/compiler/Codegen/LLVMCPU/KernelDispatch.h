// Copyright 2020 The IREE Authors
//
// Licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#ifndef IREE_COMPILER_CODEGEN_LLVMCPU_KERNELDISPATCH_H_
#define IREE_COMPILER_CODEGEN_LLVMCPU_KERNELDISPATCH_H_

#include "iree/compiler/Codegen/Dialect/LoweringConfig.h"
#include "mlir/IR/BuiltinOps.h"

namespace mlir {
namespace iree_compiler {

LogicalResult initCPULaunchConfig(ModuleOp moduleOp);

}  // namespace iree_compiler
}  // namespace mlir

#endif  // IREE_COMPILER_CODEGEN_LLVMCPU_KERNELDISPATCH_H_
