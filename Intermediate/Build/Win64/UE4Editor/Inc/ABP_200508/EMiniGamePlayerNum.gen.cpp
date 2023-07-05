// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMiniGamePlayerNum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMiniGamePlayerNum() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGamePlayerNum();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMiniGamePlayerNum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMiniGamePlayerNum, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMiniGamePlayerNum"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMiniGamePlayerNum>()
	{
		return EMiniGamePlayerNum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMiniGamePlayerNum(EMiniGamePlayerNum_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMiniGamePlayerNum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMiniGamePlayerNum_Hash() { return 4117745639U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMiniGamePlayerNum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMiniGamePlayerNum"), 0, Get_Z_Construct_UEnum_ABP_200508_EMiniGamePlayerNum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMiniGamePlayerNum::Single", (int64)EMiniGamePlayerNum::Single },
				{ "EMiniGamePlayerNum::Two", (int64)EMiniGamePlayerNum::Two },
				{ "EMiniGamePlayerNum::Three", (int64)EMiniGamePlayerNum::Three },
				{ "EMiniGamePlayerNum::Four", (int64)EMiniGamePlayerNum::Four },
				{ "EMiniGamePlayerNum::Max", (int64)EMiniGamePlayerNum::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Four.Name", "EMiniGamePlayerNum::Four" },
				{ "Max.Name", "EMiniGamePlayerNum::Max" },
				{ "ModuleRelativePath", "Public/EMiniGamePlayerNum.h" },
				{ "Single.Name", "EMiniGamePlayerNum::Single" },
				{ "Three.Name", "EMiniGamePlayerNum::Three" },
				{ "Two.Name", "EMiniGamePlayerNum::Two" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMiniGamePlayerNum",
				"EMiniGamePlayerNum",
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
