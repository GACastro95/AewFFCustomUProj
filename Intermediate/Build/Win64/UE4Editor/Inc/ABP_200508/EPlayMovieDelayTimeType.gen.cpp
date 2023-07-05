// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EPlayMovieDelayTimeType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPlayMovieDelayTimeType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EPlayMovieDelayTimeType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EPlayMovieDelayTimeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EPlayMovieDelayTimeType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EPlayMovieDelayTimeType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EPlayMovieDelayTimeType>()
	{
		return EPlayMovieDelayTimeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayMovieDelayTimeType(EPlayMovieDelayTimeType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EPlayMovieDelayTimeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EPlayMovieDelayTimeType_Hash() { return 1695305679U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EPlayMovieDelayTimeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayMovieDelayTimeType"), 0, Get_Z_Construct_UEnum_ABP_200508_EPlayMovieDelayTimeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_Total", (int64)EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_Total },
				{ "EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_In", (int64)EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_In },
				{ "EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_Out", (int64)EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_Out },
				{ "EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_ANy", (int64)EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_ANy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EPlayMovieDelayTimeType_ANy.Name", "EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_ANy" },
				{ "EPlayMovieDelayTimeType_In.Name", "EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_In" },
				{ "EPlayMovieDelayTimeType_Out.Name", "EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_Out" },
				{ "EPlayMovieDelayTimeType_Total.Name", "EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_Total" },
				{ "ModuleRelativePath", "Public/EPlayMovieDelayTimeType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EPlayMovieDelayTimeType",
				"EPlayMovieDelayTimeType",
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
