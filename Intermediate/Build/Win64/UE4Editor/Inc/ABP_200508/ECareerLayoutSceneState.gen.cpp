// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerLayoutSceneState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerLayoutSceneState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerLayoutSceneState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerLayoutSceneState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerLayoutSceneState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerLayoutSceneState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerLayoutSceneState>()
	{
		return ECareerLayoutSceneState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerLayoutSceneState(ECareerLayoutSceneState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerLayoutSceneState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerLayoutSceneState_Hash() { return 4111940970U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerLayoutSceneState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerLayoutSceneState"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerLayoutSceneState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerLayoutSceneState::None", (int64)ECareerLayoutSceneState::None },
				{ "ECareerLayoutSceneState::Start", (int64)ECareerLayoutSceneState::Start },
				{ "ECareerLayoutSceneState::Playing", (int64)ECareerLayoutSceneState::Playing },
				{ "ECareerLayoutSceneState::Finish", (int64)ECareerLayoutSceneState::Finish },
				{ "ECareerLayoutSceneState::GotoCareerHub", (int64)ECareerLayoutSceneState::GotoCareerHub },
				{ "ECareerLayoutSceneState::End", (int64)ECareerLayoutSceneState::End },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "End.Name", "ECareerLayoutSceneState::End" },
				{ "Finish.Name", "ECareerLayoutSceneState::Finish" },
				{ "GotoCareerHub.Name", "ECareerLayoutSceneState::GotoCareerHub" },
				{ "ModuleRelativePath", "Public/ECareerLayoutSceneState.h" },
				{ "None.Name", "ECareerLayoutSceneState::None" },
				{ "Playing.Name", "ECareerLayoutSceneState::Playing" },
				{ "Start.Name", "ECareerLayoutSceneState::Start" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerLayoutSceneState",
				"ECareerLayoutSceneState",
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
