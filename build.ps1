Param(
    [Parameter(Mandatory=$false)]
    [Switch]$clean
)

# if user specified clean, remove all build files
if ($clean.IsPresent)
{
    if (Test-Path -Path "build")
    {
        remove-item build -R
    }
}

if (($clean.IsPresent) -or (-not (Test-Path -Path "build")))
{
    $out = new-item -Path build -ItemType Directory
} 

cd build
& cmake -G "Ninja" -DCMAKE_BUILD_TYPE="Release" ../
& cmake --build .
cd ..