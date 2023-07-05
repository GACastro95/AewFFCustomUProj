// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESyncPosRotKind.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESyncPosRotKind() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESyncPosRotKind();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESyncPosRotKind_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESyncPosRotKind, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESyncPosRotKind"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESyncPosRotKind>()
	{
		return ESyncPosRotKind_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESyncPosRotKind(ESyncPosRotKind_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESyncPosRotKind"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESyncPosRotKind_Hash() { return 795217602U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESyncPosRotKind()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESyncPosRotKind"), 0, Get_Z_Construct_UEnum_ABP_200508_ESyncPosRotKind_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESyncPosRotKind::CharaA", (int64)ESyncPosRotKind::CharaA },
				{ "ESyncPosRotKind::CharaB", (int64)ESyncPosRotKind::CharaB },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CharaA.Name", "ESyncPosRotKind::CharaA" },
				{ "CharaB.Name", "ESyncPosRotKind::CharaB" },
				{ "ModuleRelativePath", "Public/ESyncPosRotKind.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESyncPosRotKind",
				"ESyncPosRotKind",
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
