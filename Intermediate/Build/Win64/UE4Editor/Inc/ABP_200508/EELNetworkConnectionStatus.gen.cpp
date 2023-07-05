// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELNetworkConnectionStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELNetworkConnectionStatus() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkConnectionStatus();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELNetworkConnectionStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELNetworkConnectionStatus, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELNetworkConnectionStatus"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELNetworkConnectionStatus>()
	{
		return EELNetworkConnectionStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELNetworkConnectionStatus(EELNetworkConnectionStatus_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELNetworkConnectionStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELNetworkConnectionStatus_Hash() { return 2600081175U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELNetworkConnectionStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELNetworkConnectionStatus"), 0, Get_Z_Construct_UEnum_ABP_200508_EELNetworkConnectionStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELNetworkConnectionStatus::NoConnection", (int64)EELNetworkConnectionStatus::NoConnection },
				{ "EELNetworkConnectionStatus::Connected", (int64)EELNetworkConnectionStatus::Connected },
				{ "EELNetworkConnectionStatus::Maintenance", (int64)EELNetworkConnectionStatus::Maintenance },
				{ "EELNetworkConnectionStatus::ServerDown", (int64)EELNetworkConnectionStatus::ServerDown },
				{ "EELNetworkConnectionStatus::NetworkError", (int64)EELNetworkConnectionStatus::NetworkError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Connected.Name", "EELNetworkConnectionStatus::Connected" },
				{ "Maintenance.Name", "EELNetworkConnectionStatus::Maintenance" },
				{ "ModuleRelativePath", "Public/EELNetworkConnectionStatus.h" },
				{ "NetworkError.Name", "EELNetworkConnectionStatus::NetworkError" },
				{ "NoConnection.Name", "EELNetworkConnectionStatus::NoConnection" },
				{ "ServerDown.Name", "EELNetworkConnectionStatus::ServerDown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELNetworkConnectionStatus",
				"EELNetworkConnectionStatus",
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
