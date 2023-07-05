// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerCutSceneState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerCutSceneState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCutSceneState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerCutSceneState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerCutSceneState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerCutSceneState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerCutSceneState>()
	{
		return ECareerCutSceneState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerCutSceneState(ECareerCutSceneState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerCutSceneState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerCutSceneState_Hash() { return 3663391195U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerCutSceneState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerCutSceneState"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerCutSceneState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerCutSceneState::None", (int64)ECareerCutSceneState::None },
				{ "ECareerCutSceneState::Start", (int64)ECareerCutSceneState::Start },
				{ "ECareerCutSceneState::Continue", (int64)ECareerCutSceneState::Continue },
				{ "ECareerCutSceneState::Finish", (int64)ECareerCutSceneState::Finish },
				{ "ECareerCutSceneState::GotoCareerHub", (int64)ECareerCutSceneState::GotoCareerHub },
				{ "ECareerCutSceneState::MessageStart", (int64)ECareerCutSceneState::MessageStart },
				{ "ECareerCutSceneState::MessageEnd", (int64)ECareerCutSceneState::MessageEnd },
				{ "ECareerCutSceneState::End", (int64)ECareerCutSceneState::End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Continue.Name", "ECareerCutSceneState::Continue" },
				{ "End.Name", "ECareerCutSceneState::End" },
				{ "Finish.Name", "ECareerCutSceneState::Finish" },
				{ "GotoCareerHub.Name", "ECareerCutSceneState::GotoCareerHub" },
				{ "MessageEnd.Name", "ECareerCutSceneState::MessageEnd" },
				{ "MessageStart.Name", "ECareerCutSceneState::MessageStart" },
				{ "ModuleRelativePath", "Public/ECareerCutSceneState.h" },
				{ "None.Name", "ECareerCutSceneState::None" },
				{ "Start.Name", "ECareerCutSceneState::Start" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerCutSceneState",
				"ECareerCutSceneState",
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
