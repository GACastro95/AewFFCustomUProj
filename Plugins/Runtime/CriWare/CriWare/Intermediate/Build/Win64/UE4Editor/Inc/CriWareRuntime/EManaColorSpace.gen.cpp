// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/EManaColorSpace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEManaColorSpace() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_EManaColorSpace();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* EManaColorSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_EManaColorSpace, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("EManaColorSpace"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<EManaColorSpace>()
	{
		return EManaColorSpace_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EManaColorSpace(EManaColorSpace_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("EManaColorSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_EManaColorSpace_Hash() { return 158501080U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_EManaColorSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EManaColorSpace"), 0, Get_Z_Construct_UEnum_CriWareRuntime_EManaColorSpace_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EManaColorSpace::Rec601", (int64)EManaColorSpace::Rec601 },
				{ "EManaColorSpace::Rec601Full", (int64)EManaColorSpace::Rec601Full },
				{ "EManaColorSpace::Rec709", (int64)EManaColorSpace::Rec709 },
				{ "EManaColorSpace::Rec709Full", (int64)EManaColorSpace::Rec709Full },
				{ "EManaColorSpace::Num", (int64)EManaColorSpace::Num },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/EManaColorSpace.h" },
				{ "Num.Name", "EManaColorSpace::Num" },
				{ "Rec601.Name", "EManaColorSpace::Rec601" },
				{ "Rec601Full.Name", "EManaColorSpace::Rec601Full" },
				{ "Rec709.Name", "EManaColorSpace::Rec709" },
				{ "Rec709Full.Name", "EManaColorSpace::Rec709Full" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"EManaColorSpace",
				"EManaColorSpace",
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
