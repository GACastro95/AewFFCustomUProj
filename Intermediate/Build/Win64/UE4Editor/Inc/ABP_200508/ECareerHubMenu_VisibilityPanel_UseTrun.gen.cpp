// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerHubMenu_VisibilityPanel_UseTrun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerHubMenu_VisibilityPanel_UseTrun() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerHubMenu_VisibilityPanel_UseTrun();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerHubMenu_VisibilityPanel_UseTrun_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerHubMenu_VisibilityPanel_UseTrun, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerHubMenu_VisibilityPanel_UseTrun"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerHubMenu_VisibilityPanel_UseTrun>()
	{
		return ECareerHubMenu_VisibilityPanel_UseTrun_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerHubMenu_VisibilityPanel_UseTrun(ECareerHubMenu_VisibilityPanel_UseTrun_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerHubMenu_VisibilityPanel_UseTrun"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerHubMenu_VisibilityPanel_UseTrun_Hash() { return 1278482865U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerHubMenu_VisibilityPanel_UseTrun()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerHubMenu_VisibilityPanel_UseTrun"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerHubMenu_VisibilityPanel_UseTrun_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerHubMenu_VisibilityPanel_UseTrun::CommandPanel", (int64)ECareerHubMenu_VisibilityPanel_UseTrun::CommandPanel },
				{ "ECareerHubMenu_VisibilityPanel_UseTrun::ActionPanel", (int64)ECareerHubMenu_VisibilityPanel_UseTrun::ActionPanel },
				{ "ECareerHubMenu_VisibilityPanel_UseTrun::Both", (int64)ECareerHubMenu_VisibilityPanel_UseTrun::Both },
				{ "ECareerHubMenu_VisibilityPanel_UseTrun::ECareerHubMenu_VisibilityPanel_MAX", (int64)ECareerHubMenu_VisibilityPanel_UseTrun::ECareerHubMenu_VisibilityPanel_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ActionPanel.Name", "ECareerHubMenu_VisibilityPanel_UseTrun::ActionPanel" },
				{ "BlueprintType", "true" },
				{ "Both.Name", "ECareerHubMenu_VisibilityPanel_UseTrun::Both" },
				{ "CommandPanel.Name", "ECareerHubMenu_VisibilityPanel_UseTrun::CommandPanel" },
				{ "ECareerHubMenu_VisibilityPanel_MAX.Hidden", "" },
				{ "ECareerHubMenu_VisibilityPanel_MAX.Name", "ECareerHubMenu_VisibilityPanel_UseTrun::ECareerHubMenu_VisibilityPanel_MAX" },
				{ "ModuleRelativePath", "Public/ECareerHubMenu_VisibilityPanel_UseTrun.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerHubMenu_VisibilityPanel_UseTrun",
				"ECareerHubMenu_VisibilityPanel_UseTrun",
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
