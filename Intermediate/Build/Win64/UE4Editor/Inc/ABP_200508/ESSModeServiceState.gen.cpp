// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSModeServiceState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSModeServiceState() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSModeServiceState();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSModeServiceState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSModeServiceState, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSModeServiceState"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSModeServiceState>()
	{
		return ESSModeServiceState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSModeServiceState(ESSModeServiceState_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSModeServiceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSModeServiceState_Hash() { return 744987627U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSModeServiceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSModeServiceState"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSModeServiceState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSModeServiceState::None", (int64)ESSModeServiceState::None },
				{ "ESSModeServiceState::InService", (int64)ESSModeServiceState::InService },
				{ "ESSModeServiceState::Maintenance", (int64)ESSModeServiceState::Maintenance },
				{ "ESSModeServiceState::Closed", (int64)ESSModeServiceState::Closed },
				{ "ESSModeServiceState::IsNull", (int64)ESSModeServiceState::IsNull },
				{ "ESSModeServiceState::IsNotEndSetup", (int64)ESSModeServiceState::IsNotEndSetup },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Closed.Name", "ESSModeServiceState::Closed" },
				{ "InService.Name", "ESSModeServiceState::InService" },
				{ "IsNotEndSetup.Name", "ESSModeServiceState::IsNotEndSetup" },
				{ "IsNull.Name", "ESSModeServiceState::IsNull" },
				{ "Maintenance.Name", "ESSModeServiceState::Maintenance" },
				{ "ModuleRelativePath", "Public/ESSModeServiceState.h" },
				{ "None.Name", "ESSModeServiceState::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSModeServiceState",
				"ESSModeServiceState",
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
