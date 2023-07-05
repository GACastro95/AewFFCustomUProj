// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EMiniGamePlayNum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEMiniGamePlayNum() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EMiniGamePlayNum();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EMiniGamePlayNum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EMiniGamePlayNum, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EMiniGamePlayNum"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EMiniGamePlayNum>()
	{
		return EMiniGamePlayNum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMiniGamePlayNum(EMiniGamePlayNum_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EMiniGamePlayNum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EMiniGamePlayNum_Hash() { return 3843760766U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EMiniGamePlayNum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMiniGamePlayNum"), 0, Get_Z_Construct_UEnum_ABP_200508_EMiniGamePlayNum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMiniGamePlayNum::Play1", (int64)EMiniGamePlayNum::Play1 },
				{ "EMiniGamePlayNum::Play2", (int64)EMiniGamePlayNum::Play2 },
				{ "EMiniGamePlayNum::Play3", (int64)EMiniGamePlayNum::Play3 },
				{ "EMiniGamePlayNum::Max", (int64)EMiniGamePlayNum::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Max.Name", "EMiniGamePlayNum::Max" },
				{ "ModuleRelativePath", "Public/EMiniGamePlayNum.h" },
				{ "Play1.Name", "EMiniGamePlayNum::Play1" },
				{ "Play2.Name", "EMiniGamePlayNum::Play2" },
				{ "Play3.Name", "EMiniGamePlayNum::Play3" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EMiniGamePlayNum",
				"EMiniGamePlayNum",
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
