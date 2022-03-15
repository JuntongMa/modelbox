/*
 * Copyright 2021 The Modelbox Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MODELBOX_SOLUTION_H_
#define MODELBOX_SOLUTION_H_

#include <modelbox/base/status.h>
#include <map>
#include <memory>
#include <string>

#define DEFAULT_SLOTION_PATH "/usr/local/share/modelbox/solution/graphs"

namespace modelbox {

class Solution {
 public:
  Solution(const std::string &solution_name);
  virtual ~Solution();

  void SetSolutionDir(const std::string &dir);

  Solution &SetArgs(const std::string &key, const std::string &value);
  const std::string GetSolutionDir() const;
  const std::string GetSolutionName() const;

 private:
  std::string solution_name_;
  std::string solution_dir_{DEFAULT_SLOTION_PATH};
  std::map<std::string, std::string> args_;
};

}  // namespace modelbox
#endif