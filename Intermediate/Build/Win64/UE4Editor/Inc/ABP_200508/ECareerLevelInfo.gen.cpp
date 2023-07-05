// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerLevelInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerLevelInfo() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerLevelInfo();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerLevelInfo_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerLevelInfo, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerLevelInfo"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerLevelInfo>()
	{
		return ECareerLevelInfo_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerLevelInfo(ECareerLevelInfo_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerLevelInfo"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerLevelInfo_Hash() { return 1892739474U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerLevelInfo()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerLevelInfo"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerLevelInfo_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerLevelInfo::Career_Level_None", (int64)ECareerLevelInfo::Career_Level_None },
				{ "ECareerLevelInfo::Career_Level_Hub", (int64)ECareerLevelInfo::Career_Level_Hub },
				{ "ECareerLevelInfo::Career_Level_Map", (int64)ECareerLevelInfo::Career_Level_Map },
				{ "ECareerLevelInfo::Career_Level_Event", (int64)ECareerLevelInfo::Career_Level_Event },
				{ "ECareerLevelInfo::Career_Level_CutScene", (int64)ECareerLevelInfo::Career_Level_CutScene },
				{ "ECareerLevelInfo::Career_Level_MovieScene", (int64)ECareerLevelInfo::Career_Level_MovieScene },
				{ "ECareerLevelInfo::Career_Level_Minigame", (int64)ECareerLevelInfo::Career_Level_Minigame },
				{ "ECareerLevelInfo::Career_Level_LayoutScene", (int64)ECareerLevelInfo::Career_Level_LayoutScene },
				{ "ECareerLevelInfo::Career_Level_OtherMenu", (int64)ECareerLevelInfo::Career_Level_OtherMenu },
				{ "ECareerLevelInfo::Career_Level_StartSequence", (int64)ECareerLevelInfo::Career_Level_StartSequence },
				{ "ECareerLevelInfo::Career_Level_MAX", (int64)ECareerLevelInfo::Career_Level_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Career_Level_CutScene.Name", "ECareerLevelInfo::Career_Level_CutScene" },
				{ "Career_Level_Event.Name", "ECareerLevelInfo::Career_Level_Event" },
				{ "Career_Level_Hub.Name", "ECareerLevelInfo::Career_Level_Hub" },
				{ "Career_Level_LayoutScene.Name", "ECareerLevelInfo::Career_Level_LayoutScene" },
				{ "Career_Level_Map.Name", "ECareerLevelInfo::Career_Level_Map" },
				{ "Career_Level_MAX.Hidden", "" },
				{ "Career_Level_MAX.Name", "ECareerLevelInfo::Career_Level_MAX" },
				{ "Career_Level_Minigame.Name", "ECareerLevelInfo::Career_Level_Minigame" },
				{ "Career_Level_MovieScene.Name", "ECareerLevelInfo::Career_Level_MovieScene" },
				{ "Career_Level_None.Name", "ECareerLevelInfo::Career_Level_None" },
				{ "Career_Level_OtherMenu.Name", "ECareerLevelInfo::Career_Level_OtherMenu" },
				{ "Career_Level_StartSequence.Name", "ECareerLevelInfo::Career_Level_StartSequence" },
				{ "ModuleRelativePath", "Public/ECareerLevelInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerLevelInfo",
				"ECareerLevelInfo",
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
