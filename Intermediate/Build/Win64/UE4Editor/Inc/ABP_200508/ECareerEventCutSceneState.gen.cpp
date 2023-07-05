// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerEventCutSceneState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerEventCutSceneState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventCutSceneState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerEventCutSceneState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerEventCutSceneState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerEventCutSceneState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerEventCutSceneState>()
	{
		return ECareerEventCutSceneState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerEventCutSceneState(ECareerEventCutSceneState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerEventCutSceneState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerEventCutSceneState_Hash() { return 3700900647U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerEventCutSceneState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerEventCutSceneState"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerEventCutSceneState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerEventCutSceneState::CutSceneSeeToEnd", (int64)ECareerEventCutSceneState::CutSceneSeeToEnd },
				{ "ECareerEventCutSceneState::MovieSeeToEnd", (int64)ECareerEventCutSceneState::MovieSeeToEnd },
				{ "ECareerEventCutSceneState::CutSceneSkip", (int64)ECareerEventCutSceneState::CutSceneSkip },
				{ "ECareerEventCutSceneState::MovieSkip", (int64)ECareerEventCutSceneState::MovieSkip },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CutSceneSeeToEnd.Name", "ECareerEventCutSceneState::CutSceneSeeToEnd" },
				{ "CutSceneSkip.Name", "ECareerEventCutSceneState::CutSceneSkip" },
				{ "ModuleRelativePath", "Public/ECareerEventCutSceneState.h" },
				{ "MovieSeeToEnd.Name", "ECareerEventCutSceneState::MovieSeeToEnd" },
				{ "MovieSkip.Name", "ECareerEventCutSceneState::MovieSkip" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerEventCutSceneState",
				"ECareerEventCutSceneState",
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
