// MIT License

using UnrealBuildTool;
using System.Collections.Generic;

public class FlybotTarget : TargetRules
{
	public FlybotTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "Flybot" } );
	}
}
