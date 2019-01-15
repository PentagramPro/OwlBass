SET targetName=OwlBass
SET dllPath=Builds\VisualStudio2017\x64\Release\VST\%targetName%.dll
SET exePath=Builds\VisualStudio2017\x64\Release\Standalone Plugin\%targetName%.exe
SET releasePath=out
SET presetsPath=Presets
SET releasePresetsPath=%releasePath%\presets

rmdir /S /Q "%releasePath%"

if not exist "%releasePath%" mkdir "%releasePath%"
if not exist "%releasePresetsPath%" mkdir "%releasePresetsPath%"
copy /Y "%dllPath%" "%releasePath%"
copy /Y "%exePath%" "%releasePath%"
copy /Y "%presetsPath%\*" "%releasePresetsPath%"