# conan-xcode

## Requirements
Git >= 2.39.3
Python >= 3.12.2

## Install Conan
```
python -m venv venv
source venv/bin/activate
pip install conan==2.2.2
```

## Create Conan Project `alpha`
```
conan new cmake_exe -d version=1.0 -d name=alpha
```