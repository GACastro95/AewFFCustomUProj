// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/eSSWebAPIType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeSSWebAPIType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSWebAPIType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* eSSWebAPIType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_eSSWebAPIType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("eSSWebAPIType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<eSSWebAPIType>()
	{
		return eSSWebAPIType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eSSWebAPIType(eSSWebAPIType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("eSSWebAPIType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_eSSWebAPIType_Hash() { return 602844606U; }
	UEnum* Z_Construct_UEnum_ABP_200508_eSSWebAPIType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eSSWebAPIType"), 0, Get_Z_Construct_UEnum_ABP_200508_eSSWebAPIType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eSSWebAPIType::eSSWebAPIType_SessionMatch", (int64)eSSWebAPIType::eSSWebAPIType_SessionMatch },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "eSSWebAPIType_SessionMatch.Name", "eSSWebAPIType::eSSWebAPIType_SessionMatch" },
				{ "ModuleRelativePath", "Public/eSSWebAPIType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"eSSWebAPIType",
				"eSSWebAPIType",
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
