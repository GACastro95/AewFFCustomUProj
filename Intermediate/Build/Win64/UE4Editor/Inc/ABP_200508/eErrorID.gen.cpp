// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/eErrorID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeErrorID() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eErrorID();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* eErrorID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_eErrorID, Z_Construct_UPackage__Script_ABP_200508(), TEXT("eErrorID"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<eErrorID>()
	{
		return eErrorID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eErrorID(eErrorID_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("eErrorID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_eErrorID_Hash() { return 4047714153U; }
	UEnum* Z_Construct_UEnum_ABP_200508_eErrorID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eErrorID"), 0, Get_Z_Construct_UEnum_ABP_200508_eErrorID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eErrorID::eErrorID_None", (int64)eErrorID::eErrorID_None },
				{ "eErrorID::eErrorID_HTTP", (int64)eErrorID::eErrorID_HTTP },
				{ "eErrorID::eErrorID_SS", (int64)eErrorID::eErrorID_SS },
				{ "eErrorID::eErrorID_YGS2", (int64)eErrorID::eErrorID_YGS2 },
				{ "eErrorID::eErrorID_AWS", (int64)eErrorID::eErrorID_AWS },
				{ "eErrorID::eErrorID_ServerNET", (int64)eErrorID::eErrorID_ServerNET },
				{ "eErrorID::eErrorID_EOS", (int64)eErrorID::eErrorID_EOS },
				{ "eErrorID::eErrorID_Platform", (int64)eErrorID::eErrorID_Platform },
				{ "eErrorID::eErrorID_Num", (int64)eErrorID::eErrorID_Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "eErrorID_AWS.Name", "eErrorID::eErrorID_AWS" },
				{ "eErrorID_EOS.Name", "eErrorID::eErrorID_EOS" },
				{ "eErrorID_HTTP.Name", "eErrorID::eErrorID_HTTP" },
				{ "eErrorID_None.Name", "eErrorID::eErrorID_None" },
				{ "eErrorID_Num.Name", "eErrorID::eErrorID_Num" },
				{ "eErrorID_Platform.Name", "eErrorID::eErrorID_Platform" },
				{ "eErrorID_ServerNET.Name", "eErrorID::eErrorID_ServerNET" },
				{ "eErrorID_SS.Name", "eErrorID::eErrorID_SS" },
				{ "eErrorID_YGS2.Name", "eErrorID::eErrorID_YGS2" },
				{ "ModuleRelativePath", "Public/eErrorID.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"eErrorID",
				"eErrorID",
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
