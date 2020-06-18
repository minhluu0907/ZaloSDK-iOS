#!/bin/bash -e

set -e


version=$(grep "s.version[ ]*="  ZaloSDK.podspec | awk '{print $3}' | tr -d "'")
json_url="https://raw.githubusercontent.com/minhluu0907/ZaloSDK-iOS/master/"
binary_url="https://github.com/minhluu0907/ZaloSDK-iOS/releases/download/$version"
carthage_dir="CarthageFiles"

mkdir -p "$carthage_dir"

cd "ZaloSDK/Frameworks"

for f in *; do
    zip -r -X "$f.zip" "$f"
    mv "$f.zip" "../../$carthage_dir"

    jsonFile="${f%.*}.json"

    echo "{ \"$version\": \"$binary_url/$f.zip\" }" > "../../$carthage_dir/$jsonFile"
done