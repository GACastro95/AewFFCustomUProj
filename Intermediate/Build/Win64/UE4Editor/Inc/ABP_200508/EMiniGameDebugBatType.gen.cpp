// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMiniGameDebugBatType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMiniGameDebugBatType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameDebugBatType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMiniGameDebugBatType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMiniGameDebugBatType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMiniGameDebugBatType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMiniGameDebugBatType>()
	{
		return EMiniGameDebugBatType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMiniGameDebugBatType(EMiniGameDebugBatType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMiniGameDebugBatType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMiniGameDebugBatType_Hash() { return 1173824870U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMiniGameDebugBatType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMiniGameDebugBatType"), 0, Get_Z_Construct_UEnum_ABP_200508_EMiniGameDebugBatType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMiniGameDebugBatType::List_None", (int64)EMiniGameDebugBatType::List_None },
				{ "EMiniGameDebugBatType::List_Sinai", (int64)EMiniGameDebugBatType::List_Sinai },
				{ "EMiniGameDebugBatType::List_Normal", (int64)EMiniGameDebugBatType::List_Normal },
				{ "EMiniGameDebugBatType::List_WireBat", (int64)EMiniGameDebugBatType::List_WireBat },
				{ "EMiniGameDebugBatType::List_Max", (int64)EMiniGameDebugBatType::List_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "List_Max.Name", "EMiniGameDebugBatType::List_Max" },
				{ "List_None.Name", "EMiniGameDebugBatType::List_None" },
				{ "List_Normal.Name", "EMiniGameDebugBatType::List_Normal" },
				{ "List_Sinai.Name", "EMiniGameDebugBatType::List_Sinai" },
				{ "List_WireBat.Name", "EMiniGameDebugBatType::List_WireBat" },
				{ "ModuleRelativePath", "Public/EMiniGameDebugBatType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMiniGameDebugBatType",
				"EMiniGameDebugBatType",
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
