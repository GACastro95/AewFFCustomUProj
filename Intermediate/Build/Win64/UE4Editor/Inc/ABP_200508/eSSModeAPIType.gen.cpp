// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/eSSModeAPIType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeSSModeAPIType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSModeAPIType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* eSSModeAPIType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_eSSModeAPIType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("eSSModeAPIType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<eSSModeAPIType>()
	{
		return eSSModeAPIType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eSSModeAPIType(eSSModeAPIType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("eSSModeAPIType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_eSSModeAPIType_Hash() { return 197389436U; }
	UEnum* Z_Construct_UEnum_ABP_200508_eSSModeAPIType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eSSModeAPIType"), 0, Get_Z_Construct_UEnum_ABP_200508_eSSModeAPIType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eSSModeAPIType::eSSModeAPIType_None", (int64)eSSModeAPIType::eSSModeAPIType_None },
				{ "eSSModeAPIType::eSSModeAPIType_FlexMatchStart", (int64)eSSModeAPIType::eSSModeAPIType_FlexMatchStart },
				{ "eSSModeAPIType::eSSModeAPIType_FlexMatchStatus", (int64)eSSModeAPIType::eSSModeAPIType_FlexMatchStatus },
				{ "eSSModeAPIType::eSSModeAPIType_FlexMatchCancel", (int64)eSSModeAPIType::eSSModeAPIType_FlexMatchCancel },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "eSSModeAPIType_FlexMatchCancel.Name", "eSSModeAPIType::eSSModeAPIType_FlexMatchCancel" },
				{ "eSSModeAPIType_FlexMatchStart.Name", "eSSModeAPIType::eSSModeAPIType_FlexMatchStart" },
				{ "eSSModeAPIType_FlexMatchStatus.Name", "eSSModeAPIType::eSSModeAPIType_FlexMatchStatus" },
				{ "eSSModeAPIType_None.Name", "eSSModeAPIType::eSSModeAPIType_None" },
				{ "ModuleRelativePath", "Public/eSSModeAPIType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"eSSModeAPIType",
				"eSSModeAPIType",
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
