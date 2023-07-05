// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSGameLiftConnectType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSGameLiftConnectType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSGameLiftConnectType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSGameLiftConnectType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSGameLiftConnectType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSGameLiftConnectType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSGameLiftConnectType>()
	{
		return ESSGameLiftConnectType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSGameLiftConnectType(ESSGameLiftConnectType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSGameLiftConnectType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSGameLiftConnectType_Hash() { return 1993076456U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSGameLiftConnectType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSGameLiftConnectType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSGameLiftConnectType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSGameLiftConnectType::EGameLiftConnectType_Production", (int64)ESSGameLiftConnectType::EGameLiftConnectType_Production },
				{ "ESSGameLiftConnectType::EGameLiftConnectType_Develop", (int64)ESSGameLiftConnectType::EGameLiftConnectType_Develop },
				{ "ESSGameLiftConnectType::EGameLiftConnectType_Test1", (int64)ESSGameLiftConnectType::EGameLiftConnectType_Test1 },
				{ "ESSGameLiftConnectType::EGameLiftConnectType_Test2", (int64)ESSGameLiftConnectType::EGameLiftConnectType_Test2 },
				{ "ESSGameLiftConnectType::EGameLiftConnectType_Num", (int64)ESSGameLiftConnectType::EGameLiftConnectType_Num },
				{ "ESSGameLiftConnectType::EGameLiftConnectType_MAX", (int64)ESSGameLiftConnectType::EGameLiftConnectType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EGameLiftConnectType_Develop.Name", "ESSGameLiftConnectType::EGameLiftConnectType_Develop" },
				{ "EGameLiftConnectType_MAX.Hidden", "" },
				{ "EGameLiftConnectType_MAX.Name", "ESSGameLiftConnectType::EGameLiftConnectType_MAX" },
				{ "EGameLiftConnectType_Num.Name", "ESSGameLiftConnectType::EGameLiftConnectType_Num" },
				{ "EGameLiftConnectType_Production.Name", "ESSGameLiftConnectType::EGameLiftConnectType_Production" },
				{ "EGameLiftConnectType_Test1.Name", "ESSGameLiftConnectType::EGameLiftConnectType_Test1" },
				{ "EGameLiftConnectType_Test2.Name", "ESSGameLiftConnectType::EGameLiftConnectType_Test2" },
				{ "ModuleRelativePath", "Public/ESSGameLiftConnectType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSGameLiftConnectType",
				"ESSGameLiftConnectType",
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
