// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EBodyHomingType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEBodyHomingType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EBodyHomingType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EBodyHomingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EBodyHomingType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EBodyHomingType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EBodyHomingType>()
	{
		return EBodyHomingType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBodyHomingType(EBodyHomingType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EBodyHomingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EBodyHomingType_Hash() { return 235956286U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EBodyHomingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBodyHomingType"), 0, Get_Z_Construct_UEnum_ABP_200508_EBodyHomingType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBodyHomingType::None", (int64)EBodyHomingType::None },
				{ "EBodyHomingType::NoTime", (int64)EBodyHomingType::NoTime },
				{ "EBodyHomingType::Fast", (int64)EBodyHomingType::Fast },
				{ "EBodyHomingType::Normal", (int64)EBodyHomingType::Normal },
				{ "EBodyHomingType::LittleSlow", (int64)EBodyHomingType::LittleSlow },
				{ "EBodyHomingType::Slow", (int64)EBodyHomingType::Slow },
				{ "EBodyHomingType::QuickStart", (int64)EBodyHomingType::QuickStart },
				{ "EBodyHomingType::Attack", (int64)EBodyHomingType::Attack },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "EBodyHomingType::Attack" },
				{ "BlueprintType", "true" },
				{ "Fast.Name", "EBodyHomingType::Fast" },
				{ "LittleSlow.Name", "EBodyHomingType::LittleSlow" },
				{ "ModuleRelativePath", "Public/EBodyHomingType.h" },
				{ "None.Name", "EBodyHomingType::None" },
				{ "Normal.Name", "EBodyHomingType::Normal" },
				{ "NoTime.Name", "EBodyHomingType::NoTime" },
				{ "QuickStart.Name", "EBodyHomingType::QuickStart" },
				{ "Slow.Name", "EBodyHomingType::Slow" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EBodyHomingType",
				"EBodyHomingType",
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
