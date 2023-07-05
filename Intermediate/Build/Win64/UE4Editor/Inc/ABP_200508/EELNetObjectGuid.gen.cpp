// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELNetObjectGuid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELNetObjectGuid() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELNetObjectGuid();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELNetObjectGuid_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELNetObjectGuid, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELNetObjectGuid"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELNetObjectGuid>()
	{
		return EELNetObjectGuid_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELNetObjectGuid(EELNetObjectGuid_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELNetObjectGuid"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELNetObjectGuid_Hash() { return 2465951883U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELNetObjectGuid()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELNetObjectGuid"), 0, Get_Z_Construct_UEnum_ABP_200508_EELNetObjectGuid_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELNetObjectGuid::None", (int64)EELNetObjectGuid::None },
				{ "EELNetObjectGuid::Default", (int64)EELNetObjectGuid::Default },
				{ "EELNetObjectGuid::GameState", (int64)EELNetObjectGuid::GameState },
				{ "EELNetObjectGuid::VictoryCutsceneManager", (int64)EELNetObjectGuid::VictoryCutsceneManager },
				{ "EELNetObjectGuid::Referee", (int64)EELNetObjectGuid::Referee },
				{ "EELNetObjectGuid::RingObject000", (int64)EELNetObjectGuid::RingObject000 },
				{ "EELNetObjectGuid::RingObject001", (int64)EELNetObjectGuid::RingObject001 },
				{ "EELNetObjectGuid::RingObject002", (int64)EELNetObjectGuid::RingObject002 },
				{ "EELNetObjectGuid::RingObject003", (int64)EELNetObjectGuid::RingObject003 },
				{ "EELNetObjectGuid::RingObject004", (int64)EELNetObjectGuid::RingObject004 },
				{ "EELNetObjectGuid::RingObject005", (int64)EELNetObjectGuid::RingObject005 },
				{ "EELNetObjectGuid::RingObject006", (int64)EELNetObjectGuid::RingObject006 },
				{ "EELNetObjectGuid::RingObject007", (int64)EELNetObjectGuid::RingObject007 },
				{ "EELNetObjectGuid::RingObject100", (int64)EELNetObjectGuid::RingObject100 },
				{ "EELNetObjectGuid::RingObject101", (int64)EELNetObjectGuid::RingObject101 },
				{ "EELNetObjectGuid::RingObject102", (int64)EELNetObjectGuid::RingObject102 },
				{ "EELNetObjectGuid::RingObject103", (int64)EELNetObjectGuid::RingObject103 },
				{ "EELNetObjectGuid::RingObject104", (int64)EELNetObjectGuid::RingObject104 },
				{ "EELNetObjectGuid::RingObject105", (int64)EELNetObjectGuid::RingObject105 },
				{ "EELNetObjectGuid::RingObject106", (int64)EELNetObjectGuid::RingObject106 },
				{ "EELNetObjectGuid::RingObject107", (int64)EELNetObjectGuid::RingObject107 },
				{ "EELNetObjectGuid::StageDisplay000", (int64)EELNetObjectGuid::StageDisplay000 },
				{ "EELNetObjectGuid::StageDisplay001", (int64)EELNetObjectGuid::StageDisplay001 },
				{ "EELNetObjectGuid::StageDisplay002", (int64)EELNetObjectGuid::StageDisplay002 },
				{ "EELNetObjectGuid::StageDisplay003", (int64)EELNetObjectGuid::StageDisplay003 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "EELNetObjectGuid::Default" },
				{ "GameState.Name", "EELNetObjectGuid::GameState" },
				{ "ModuleRelativePath", "Public/EELNetObjectGuid.h" },
				{ "None.Name", "EELNetObjectGuid::None" },
				{ "Referee.Name", "EELNetObjectGuid::Referee" },
				{ "RingObject000.Name", "EELNetObjectGuid::RingObject000" },
				{ "RingObject001.Name", "EELNetObjectGuid::RingObject001" },
				{ "RingObject002.Name", "EELNetObjectGuid::RingObject002" },
				{ "RingObject003.Name", "EELNetObjectGuid::RingObject003" },
				{ "RingObject004.Name", "EELNetObjectGuid::RingObject004" },
				{ "RingObject005.Name", "EELNetObjectGuid::RingObject005" },
				{ "RingObject006.Name", "EELNetObjectGuid::RingObject006" },
				{ "RingObject007.Name", "EELNetObjectGuid::RingObject007" },
				{ "RingObject100.Name", "EELNetObjectGuid::RingObject100" },
				{ "RingObject101.Name", "EELNetObjectGuid::RingObject101" },
				{ "RingObject102.Name", "EELNetObjectGuid::RingObject102" },
				{ "RingObject103.Name", "EELNetObjectGuid::RingObject103" },
				{ "RingObject104.Name", "EELNetObjectGuid::RingObject104" },
				{ "RingObject105.Name", "EELNetObjectGuid::RingObject105" },
				{ "RingObject106.Name", "EELNetObjectGuid::RingObject106" },
				{ "RingObject107.Name", "EELNetObjectGuid::RingObject107" },
				{ "StageDisplay000.Name", "EELNetObjectGuid::StageDisplay000" },
				{ "StageDisplay001.Name", "EELNetObjectGuid::StageDisplay001" },
				{ "StageDisplay002.Name", "EELNetObjectGuid::StageDisplay002" },
				{ "StageDisplay003.Name", "EELNetObjectGuid::StageDisplay003" },
				{ "VictoryCutsceneManager.Name", "EELNetObjectGuid::VictoryCutsceneManager" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELNetObjectGuid",
				"EELNetObjectGuid",
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
