// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EELYGS2ServerType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEELYGS2ServerType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELYGS2ServerType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EELYGS2ServerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EELYGS2ServerType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EELYGS2ServerType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EELYGS2ServerType>()
	{
		return EELYGS2ServerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EELYGS2ServerType(EELYGS2ServerType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EELYGS2ServerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EELYGS2ServerType_Hash() { return 47856035U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EELYGS2ServerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EELYGS2ServerType"), 0, Get_Z_Construct_UEnum_ABP_200508_EELYGS2ServerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EELYGS2ServerType::Default", (int64)EELYGS2ServerType::Default },
				{ "EELYGS2ServerType::Override", (int64)EELYGS2ServerType::Override },
				{ "EELYGS2ServerType::Primary", (int64)EELYGS2ServerType::Primary },
				{ "EELYGS2ServerType::Secondary", (int64)EELYGS2ServerType::Secondary },
				{ "EELYGS2ServerType::Local", (int64)EELYGS2ServerType::Local },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Default.Name", "EELYGS2ServerType::Default" },
				{ "Local.Name", "EELYGS2ServerType::Local" },
				{ "ModuleRelativePath", "Public/EELYGS2ServerType.h" },
				{ "Override.Name", "EELYGS2ServerType::Override" },
				{ "Primary.Name", "EELYGS2ServerType::Primary" },
				{ "Secondary.Name", "EELYGS2ServerType::Secondary" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EELYGS2ServerType",
				"EELYGS2ServerType",
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
