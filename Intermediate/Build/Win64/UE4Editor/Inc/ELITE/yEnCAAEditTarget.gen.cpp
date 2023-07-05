// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE/Public/yEnCAAEditTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyEnCAAEditTarget() {}
// Cross Module References
	ELITE_API UEnum* Z_Construct_UEnum_ELITE_yEnCAAEditTarget();
	UPackage* Z_Construct_UPackage__Script_ELITE();
// End Cross Module References
	static UEnum* yEnCAAEditTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_yEnCAAEditTarget, Z_Construct_UPackage__Script_ELITE(), TEXT("yEnCAAEditTarget"));
		}
		return Singleton;
	}
	template<> ELITE_API UEnum* StaticEnum<yEnCAAEditTarget>()
	{
		return yEnCAAEditTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_yEnCAAEditTarget(yEnCAAEditTarget_StaticEnum, TEXT("/Script/ELITE"), TEXT("yEnCAAEditTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_yEnCAAEditTarget_Hash() { return 2587337114U; }
	UEnum* Z_Construct_UEnum_ELITE_yEnCAAEditTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("yEnCAAEditTarget"), 0, Get_Z_Construct_UEnum_ELITE_yEnCAAEditTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "yEnCAAEditTarget::None", (int64)yEnCAAEditTarget::None },
				{ "yEnCAAEditTarget::ArenaSettingsRoot", (int64)yEnCAAEditTarget::ArenaSettingsRoot },
				{ "yEnCAAEditTarget::ArenaMatchup", (int64)yEnCAAEditTarget::ArenaMatchup },
				{ "yEnCAAEditTarget::ArenaTransition", (int64)yEnCAAEditTarget::ArenaTransition },
				{ "yEnCAAEditTarget::ArenaName", (int64)yEnCAAEditTarget::ArenaName },
				{ "yEnCAAEditTarget::RingRoot", (int64)yEnCAAEditTarget::RingRoot },
				{ "yEnCAAEditTarget::RingMat", (int64)yEnCAAEditTarget::RingMat },
				{ "yEnCAAEditTarget::RingRopeRoot", (int64)yEnCAAEditTarget::RingRopeRoot },
				{ "yEnCAAEditTarget::RingRopeAll", (int64)yEnCAAEditTarget::RingRopeAll },
				{ "yEnCAAEditTarget::RingRope", (int64)yEnCAAEditTarget::RingRope },
				{ "yEnCAAEditTarget::RingCornerPostRoot", (int64)yEnCAAEditTarget::RingCornerPostRoot },
				{ "yEnCAAEditTarget::RingCornerPostAll", (int64)yEnCAAEditTarget::RingCornerPostAll },
				{ "yEnCAAEditTarget::RingCornerPost", (int64)yEnCAAEditTarget::RingCornerPost },
				{ "yEnCAAEditTarget::RingCornerJoint", (int64)yEnCAAEditTarget::RingCornerJoint },
				{ "yEnCAAEditTarget::RingTurnbuckleCoverRoot", (int64)yEnCAAEditTarget::RingTurnbuckleCoverRoot },
				{ "yEnCAAEditTarget::RingTurnbuckleCoverAll", (int64)yEnCAAEditTarget::RingTurnbuckleCoverAll },
				{ "yEnCAAEditTarget::RingTurnbuckleCover", (int64)yEnCAAEditTarget::RingTurnbuckleCover },
				{ "yEnCAAEditTarget::RingApron", (int64)yEnCAAEditTarget::RingApron },
				{ "yEnCAAEditTarget::RingSideRoot", (int64)yEnCAAEditTarget::RingSideRoot },
				{ "yEnCAAEditTarget::RingSideMat", (int64)yEnCAAEditTarget::RingSideMat },
				{ "yEnCAAEditTarget::RingSideFloor", (int64)yEnCAAEditTarget::RingSideFloor },
				{ "yEnCAAEditTarget::RingSideBarricade", (int64)yEnCAAEditTarget::RingSideBarricade },
				{ "yEnCAAEditTarget::StageRampRoot", (int64)yEnCAAEditTarget::StageRampRoot },
				{ "yEnCAAEditTarget::StageRampStage", (int64)yEnCAAEditTarget::StageRampStage },
				{ "yEnCAAEditTarget::StageRampMovie", (int64)yEnCAAEditTarget::StageRampMovie },
				{ "yEnCAAEditTarget::StageRampRamp", (int64)yEnCAAEditTarget::StageRampRamp },
				{ "yEnCAAEditTarget::StageRampObjectRoot", (int64)yEnCAAEditTarget::StageRampObjectRoot },
				{ "yEnCAAEditTarget::StageRampObject", (int64)yEnCAAEditTarget::StageRampObject },
				{ "yEnCAAEditTarget::LightRoot", (int64)yEnCAAEditTarget::LightRoot },
				{ "yEnCAAEditTarget::LightLEDRoot", (int64)yEnCAAEditTarget::LightLEDRoot },
				{ "yEnCAAEditTarget::LightLED", (int64)yEnCAAEditTarget::LightLED },
				{ "yEnCAAEditTarget::LightSLRoot", (int64)yEnCAAEditTarget::LightSLRoot },
				{ "yEnCAAEditTarget::LightSL", (int64)yEnCAAEditTarget::LightSL },
				{ "yEnCAAEditTarget::LightEnvironment", (int64)yEnCAAEditTarget::LightEnvironment },
				{ "yEnCAAEditTarget::Loadout", (int64)yEnCAAEditTarget::Loadout },
				{ "yEnCAAEditTarget::Finalize", (int64)yEnCAAEditTarget::Finalize },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ArenaMatchup.Name", "yEnCAAEditTarget::ArenaMatchup" },
				{ "ArenaName.Name", "yEnCAAEditTarget::ArenaName" },
				{ "ArenaSettingsRoot.Name", "yEnCAAEditTarget::ArenaSettingsRoot" },
				{ "ArenaTransition.Name", "yEnCAAEditTarget::ArenaTransition" },
				{ "BlueprintType", "true" },
				{ "Finalize.Name", "yEnCAAEditTarget::Finalize" },
				{ "LightEnvironment.Name", "yEnCAAEditTarget::LightEnvironment" },
				{ "LightLED.Name", "yEnCAAEditTarget::LightLED" },
				{ "LightLEDRoot.Name", "yEnCAAEditTarget::LightLEDRoot" },
				{ "LightRoot.Name", "yEnCAAEditTarget::LightRoot" },
				{ "LightSL.Name", "yEnCAAEditTarget::LightSL" },
				{ "LightSLRoot.Name", "yEnCAAEditTarget::LightSLRoot" },
				{ "Loadout.Name", "yEnCAAEditTarget::Loadout" },
				{ "ModuleRelativePath", "Public/yEnCAAEditTarget.h" },
				{ "None.Name", "yEnCAAEditTarget::None" },
				{ "RingApron.Name", "yEnCAAEditTarget::RingApron" },
				{ "RingCornerJoint.Name", "yEnCAAEditTarget::RingCornerJoint" },
				{ "RingCornerPost.Name", "yEnCAAEditTarget::RingCornerPost" },
				{ "RingCornerPostAll.Name", "yEnCAAEditTarget::RingCornerPostAll" },
				{ "RingCornerPostRoot.Name", "yEnCAAEditTarget::RingCornerPostRoot" },
				{ "RingMat.Name", "yEnCAAEditTarget::RingMat" },
				{ "RingRoot.Name", "yEnCAAEditTarget::RingRoot" },
				{ "RingRope.Name", "yEnCAAEditTarget::RingRope" },
				{ "RingRopeAll.Name", "yEnCAAEditTarget::RingRopeAll" },
				{ "RingRopeRoot.Name", "yEnCAAEditTarget::RingRopeRoot" },
				{ "RingSideBarricade.Name", "yEnCAAEditTarget::RingSideBarricade" },
				{ "RingSideFloor.Name", "yEnCAAEditTarget::RingSideFloor" },
				{ "RingSideMat.Name", "yEnCAAEditTarget::RingSideMat" },
				{ "RingSideRoot.Name", "yEnCAAEditTarget::RingSideRoot" },
				{ "RingTurnbuckleCover.Name", "yEnCAAEditTarget::RingTurnbuckleCover" },
				{ "RingTurnbuckleCoverAll.Name", "yEnCAAEditTarget::RingTurnbuckleCoverAll" },
				{ "RingTurnbuckleCoverRoot.Name", "yEnCAAEditTarget::RingTurnbuckleCoverRoot" },
				{ "StageRampMovie.Name", "yEnCAAEditTarget::StageRampMovie" },
				{ "StageRampObject.Name", "yEnCAAEditTarget::StageRampObject" },
				{ "StageRampObjectRoot.Name", "yEnCAAEditTarget::StageRampObjectRoot" },
				{ "StageRampRamp.Name", "yEnCAAEditTarget::StageRampRamp" },
				{ "StageRampRoot.Name", "yEnCAAEditTarget::StageRampRoot" },
				{ "StageRampStage.Name", "yEnCAAEditTarget::StageRampStage" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE,
				nullptr,
				"yEnCAAEditTarget",
				"yEnCAAEditTarget",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
