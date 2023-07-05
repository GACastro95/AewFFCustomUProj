// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELActivityUpdateMatchStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELActivityUpdateMatchStatus() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELActivityUpdateMatchStatus();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELActivityUpdateMatchStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELActivityUpdateMatchStatus, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELActivityUpdateMatchStatus"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELActivityUpdateMatchStatus>()
	{
		return EELActivityUpdateMatchStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELActivityUpdateMatchStatus(EELActivityUpdateMatchStatus_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELActivityUpdateMatchStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELActivityUpdateMatchStatus_Hash() { return 1845365783U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELActivityUpdateMatchStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELActivityUpdateMatchStatus"), 0, Get_Z_Construct_UEnum_ABP_200508_EELActivityUpdateMatchStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELActivityUpdateMatchStatus::Invalid", (int64)EELActivityUpdateMatchStatus::Invalid },
				{ "EELActivityUpdateMatchStatus::InProgress", (int64)EELActivityUpdateMatchStatus::InProgress },
				{ "EELActivityUpdateMatchStatus::Paused", (int64)EELActivityUpdateMatchStatus::Paused },
				{ "EELActivityUpdateMatchStatus::Aborted", (int64)EELActivityUpdateMatchStatus::Aborted },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aborted.Name", "EELActivityUpdateMatchStatus::Aborted" },
				{ "BlueprintType", "true" },
				{ "InProgress.Name", "EELActivityUpdateMatchStatus::InProgress" },
				{ "Invalid.Name", "EELActivityUpdateMatchStatus::Invalid" },
				{ "ModuleRelativePath", "Public/EELActivityUpdateMatchStatus.h" },
				{ "Paused.Name", "EELActivityUpdateMatchStatus::Paused" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELActivityUpdateMatchStatus",
				"EELActivityUpdateMatchStatus",
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
