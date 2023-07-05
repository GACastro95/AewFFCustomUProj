// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ELITE_Core/Public/EAttireType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEAttireType() {}
// Cross Module References
	ELITE_CORE_API UEnum* Z_Construct_UEnum_ELITE_Core_EAttireType();
	UPackage* Z_Construct_UPackage__Script_ELITE_Core();
// End Cross Module References
	static UEnum* EAttireType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ELITE_Core_EAttireType, Z_Construct_UPackage__Script_ELITE_Core(), TEXT("EAttireType"));
		}
		return Singleton;
	}
	template<> ELITE_CORE_API UEnum* StaticEnum<EAttireType>()
	{
		return EAttireType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAttireType(EAttireType_StaticEnum, TEXT("/Script/ELITE_Core"), TEXT("EAttireType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ELITE_Core_EAttireType_Hash() { return 852415818U; }
	UEnum* Z_Construct_UEnum_ELITE_Core_EAttireType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ELITE_Core();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAttireType"), 0, Get_Z_Construct_UEnum_ELITE_Core_EAttireType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAttireType::Ring", (int64)EAttireType::Ring },
				{ "EAttireType::Entrance", (int64)EAttireType::Entrance },
				{ "EAttireType::Body", (int64)EAttireType::Body },
				{ "EAttireType::Plain", (int64)EAttireType::Plain },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Body.Name", "EAttireType::Body" },
				{ "Entrance.Name", "EAttireType::Entrance" },
				{ "ModuleRelativePath", "Public/EAttireType.h" },
				{ "Plain.Name", "EAttireType::Plain" },
				{ "Ring.Name", "EAttireType::Ring" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ELITE_Core,
				nullptr,
				"EAttireType",
				"EAttireType",
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
