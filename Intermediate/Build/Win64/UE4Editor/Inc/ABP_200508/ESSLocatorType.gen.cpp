// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSLocatorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSLocatorType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSLocatorType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSLocatorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSLocatorType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSLocatorType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSLocatorType>()
	{
		return ESSLocatorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSLocatorType(ESSLocatorType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSLocatorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSLocatorType_Hash() { return 81099679U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSLocatorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSLocatorType"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSLocatorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSLocatorType::Default", (int64)ESSLocatorType::Default },
				{ "ESSLocatorType::PlayerStart", (int64)ESSLocatorType::PlayerStart },
				{ "ESSLocatorType::ItemBox", (int64)ESSLocatorType::ItemBox },
				{ "ESSLocatorType::Vehicle", (int64)ESSLocatorType::Vehicle },
				{ "ESSLocatorType::Max", (int64)ESSLocatorType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "ESSLocatorType::Default" },
				{ "ItemBox.Name", "ESSLocatorType::ItemBox" },
				{ "Max.Name", "ESSLocatorType::Max" },
				{ "ModuleRelativePath", "Public/ESSLocatorType.h" },
				{ "PlayerStart.Name", "ESSLocatorType::PlayerStart" },
				{ "Vehicle.Name", "ESSLocatorType::Vehicle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSLocatorType",
				"ESSLocatorType",
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
