// Copyright (C) 2016 by rr-
//
// This file is part of arc_unpacker.
//
// arc_unpacker is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or (at
// your option) any later version.
//
// arc_unpacker is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with arc_unpacker. If not, see <http://www.gnu.org/licenses/>.

#include "dec/malie/libu_archive_decoder.h"
#include "dec/malie/common/lib_plugins.h"

using namespace au;
using namespace au::dec::malie;

LibuArchiveDecoder::LibuArchiveDecoder()
{
    common::add_common_lib_plugins(plugin_manager);

    add_arg_parser_decorator(
        plugin_manager.create_arg_parser_decorator(
            "Selects Camellia decryption key."));
}
