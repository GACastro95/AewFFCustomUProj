// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EAtomComponentStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAtomComponentStatus() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EAtomComponentStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EAtomComponentStatus"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EAtomComponentStatus>()
	{
		return EAtomComponentStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAtomComponentStatus(EAtomComponentStatus_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EAtomComponentStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus_Hash() { return 683837780U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAtomComponentStatus"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EAtomComponentStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAtomComponentStatus::Stop", (int64)EAtomComponentStatus::Stop },
				{ "EAtomComponentStatus::Prep", (int64)EAtomComponentStatus::Prep },
				{ "EAtomComponentStatus::Playing", (int64)EAtomComponentStatus::Playing },
				{ "EAtomComponentStatus::PlayEnd", (int64)EAtomComponentStatus::PlayEnd },
				{ "EAtomComponentStatus::Error", (int64)EAtomComponentStatus::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Error.Name", "EAtomComponentStatus::Error" },
				{ "ModuleRelativePath", "Public/EAtomComponentStatus.h" },
				{ "PlayEnd.Name", "EAtomComponentStatus::PlayEnd" },
				{ "Playing.Name", "EAtomComponentStatus::Playing" },
				{ "Prep.Name", "EAtomComponentStatus::Prep" },
				{ "Stop.Name", "EAtomComponentStatus::Stop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EAtomComponentStatus",
				"EAtomComponentStatus",
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
