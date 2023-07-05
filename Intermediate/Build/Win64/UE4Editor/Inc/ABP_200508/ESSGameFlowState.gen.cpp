// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSGameFlowState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSGameFlowState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGameFlowState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSGameFlowState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSGameFlowState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSGameFlowState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSGameFlowState>()
	{
		return ESSGameFlowState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSGameFlowState(ESSGameFlowState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSGameFlowState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSGameFlowState_Hash() { return 1069921886U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSGameFlowState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSGameFlowState"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSGameFlowState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSGameFlowState::None", (int64)ESSGameFlowState::None },
				{ "ESSGameFlowState::BeforeInProgress", (int64)ESSGameFlowState::BeforeInProgress },
				{ "ESSGameFlowState::Initialize", (int64)ESSGameFlowState::Initialize },
				{ "ESSGameFlowState::Loading", (int64)ESSGameFlowState::Loading },
				{ "ESSGameFlowState::Setup", (int64)ESSGameFlowState::Setup },
				{ "ESSGameFlowState::Entrance", (int64)ESSGameFlowState::Entrance },
				{ "ESSGameFlowState::OpenGamePlayScreen", (int64)ESSGameFlowState::OpenGamePlayScreen },
				{ "ESSGameFlowState::Description", (int64)ESSGameFlowState::Description },
				{ "ESSGameFlowState::Ready", (int64)ESSGameFlowState::Ready },
				{ "ESSGameFlowState::GamePlay", (int64)ESSGameFlowState::GamePlay },
				{ "ESSGameFlowState::AfterGamePlay", (int64)ESSGameFlowState::AfterGamePlay },
				{ "ESSGameFlowState::Exit", (int64)ESSGameFlowState::Exit },
				{ "ESSGameFlowState::Max", (int64)ESSGameFlowState::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AfterGamePlay.Name", "ESSGameFlowState::AfterGamePlay" },
				{ "BeforeInProgress.Name", "ESSGameFlowState::BeforeInProgress" },
				{ "BlueprintType", "true" },
				{ "Description.Name", "ESSGameFlowState::Description" },
				{ "Entrance.Name", "ESSGameFlowState::Entrance" },
				{ "Exit.Name", "ESSGameFlowState::Exit" },
				{ "GamePlay.Name", "ESSGameFlowState::GamePlay" },
				{ "Initialize.Name", "ESSGameFlowState::Initialize" },
				{ "Loading.Name", "ESSGameFlowState::Loading" },
				{ "Max.Name", "ESSGameFlowState::Max" },
				{ "ModuleRelativePath", "Public/ESSGameFlowState.h" },
				{ "None.Name", "ESSGameFlowState::None" },
				{ "OpenGamePlayScreen.Name", "ESSGameFlowState::OpenGamePlayScreen" },
				{ "Ready.Name", "ESSGameFlowState::Ready" },
				{ "Setup.Name", "ESSGameFlowState::Setup" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSGameFlowState",
				"ESSGameFlowState",
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
