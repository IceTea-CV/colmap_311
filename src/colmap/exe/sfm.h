// Copyright (c) 2023, ETH Zurich and UNC Chapel Hill.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//
//     * Neither the name of ETH Zurich and UNC Chapel Hill nor the names of
//       its contributors may be used to endorse or promote products derived
//       from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

#pragma once

#include "colmap/controllers/incremental_pipeline.h"
#include "colmap/scene/reconstruction.h"

namespace colmap {

void RunPointTriangulatorImpl(
    const std::shared_ptr<Reconstruction>& reconstruction,
    const std::string& database_path,
    const std::string& image_path,
    const std::string& output_path,
    const IncrementalPipelineOptions& options,
    bool clear_points,
    bool refine_intrinsics);

int RunAutomaticReconstructor(int argc, char** argv);
int RunBundleAdjuster(int argc, char** argv);
int RunColorExtractor(int argc, char** argv);
int RunMapper(int argc, char** argv);
int RunHierarchicalMapper(int argc, char** argv);
int RunPosePriorMapper(int argc, char** argv);
int RunPointFiltering(int argc, char** argv);
int RunPointTriangulator(int argc, char** argv);
int RunRigBundleAdjuster(int argc, char** argv);
int RunIncrementalModelRefiner(int argc, char** argv);

}  // namespace colmap
