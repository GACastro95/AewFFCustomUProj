// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWeaponThrow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWeaponThrow() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrow_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrow();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FSSWeaponThrowParam();
	ABP_200508_API UClass* Z_Construct_UClass_AELSSWeaponThrowProjectile_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AELSSWeaponThrow::execDecreaseQuantity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DecreaseQuantity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrow::execGetQuantity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetQuantity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrow::execOnRep_Quantity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Quantity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AELSSWeaponThrow::execSetQuantity)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_inQuantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuantity(Z_Param_inQuantity);
		P_NATIVE_END;
	}
	void AELSSWeaponThrow::StaticRegisterNativesAELSSWeaponThrow()
	{
		UClass* Class = AELSSWeaponThrow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DecreaseQuantity", &AELSSWeaponThrow::execDecreaseQuantity },
			{ "GetQuantity", &AELSSWeaponThrow::execGetQuantity },
			{ "OnRep_Quantity", &AELSSWeaponThrow::execOnRep_Quantity },
			{ "SetQuantity", &AELSSWeaponThrow::execSetQuantity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity_Statics
	{
		struct ELSSWeaponThrow_eventDecreaseQuantity_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrow_eventDecreaseQuantity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrow, nullptr, "DecreaseQuantity", nullptr, nullptr, sizeof(ELSSWeaponThrow_eventDecreaseQuantity_Parms), Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity_Statics
	{
		struct ELSSWeaponThrow_eventGetQuantity_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrow_eventGetQuantity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrow, nullptr, "GetQuantity", nullptr, nullptr, sizeof(ELSSWeaponThrow_eventGetQuantity_Parms), Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrow_OnRep_Quantity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrow_OnRep_Quantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrow_OnRep_Quantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrow, nullptr, "OnRep_Quantity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrow_OnRep_Quantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrow_OnRep_Quantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrow_OnRep_Quantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrow_OnRep_Quantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity_Statics
	{
		struct ELSSWeaponThrow_eventSetQuantity_Parms
		{
			int32 inQuantity;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inQuantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity_Statics::NewProp_inQuantity = { "inQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWeaponThrow_eventSetQuantity_Parms, inQuantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity_Statics::NewProp_inQuantity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWeaponThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELSSWeaponThrow, nullptr, "SetQuantity", nullptr, nullptr, sizeof(ELSSWeaponThrow_eventSetQuantity_Parms), Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELSSWeaponThrow_NoRegister()
	{
		return AELSSWeaponThrow::StaticClass();
	}
	struct Z_Construct_UClass_AELSSWeaponThrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSubParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponSubParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MoveId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StockedProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StockedProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELSSWeaponThrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AELSSWeaponBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELSSWeaponThrow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELSSWeaponThrow_DecreaseQuantity, "DecreaseQuantity" }, // 2587232363
		{ &Z_Construct_UFunction_AELSSWeaponThrow_GetQuantity, "GetQuantity" }, // 1671469252
		{ &Z_Construct_UFunction_AELSSWeaponThrow_OnRep_Quantity, "OnRep_Quantity" }, // 4062335938
		{ &Z_Construct_UFunction_AELSSWeaponThrow_SetQuantity, "SetQuantity" }, // 118769390
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWeaponThrow.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrow.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_WeaponSubParam_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrow" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_WeaponSubParam = { "WeaponSubParam", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrow, WeaponSubParam), Z_Construct_UScriptStruct_FSSWeaponThrowParam, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_WeaponSubParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_WeaponSubParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_MoveId_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrow" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_MoveId = { "MoveId", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrow, MoveId), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_MoveId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_MoveId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_StockedProjectile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrow" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_StockedProjectile = { "StockedProjectile", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrow, StockedProjectile), Z_Construct_UClass_AELSSWeaponThrowProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_StockedProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_StockedProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_VisualProjectile_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrow" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_VisualProjectile = { "VisualProjectile", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrow, VisualProjectile), Z_Construct_UClass_AELSSWeaponThrowProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_VisualProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_VisualProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_Quantity_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWeaponThrow" },
		{ "ModuleRelativePath", "Public/ELSSWeaponThrow.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_Quantity = { "Quantity", "OnRep_Quantity", (EPropertyFlags)0x0020080100002025, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AELSSWeaponThrow, Quantity), METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_Quantity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AELSSWeaponThrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_WeaponSubParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_MoveId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_StockedProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_VisualProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AELSSWeaponThrow_Statics::NewProp_Quantity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELSSWeaponThrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELSSWeaponThrow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELSSWeaponThrow_Statics::ClassParams = {
		&AELSSWeaponThrow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AELSSWeaponThrow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELSSWeaponThrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELSSWeaponThrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELSSWeaponThrow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELSSWeaponThrow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELSSWeaponThrow, 3474621376);
	template<> ABP_200508_API UClass* StaticClass<AELSSWeaponThrow>()
	{
		return AELSSWeaponThrow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELSSWeaponThrow(Z_Construct_UClass_AELSSWeaponThrow, &AELSSWeaponThrow::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELSSWeaponThrow"), false, nullptr, nullptr, nullptr);

	void AELSSWeaponThrow::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Quantity(TEXT("Quantity"));

		const bool bIsValid = true
			&& Name_Quantity == ClassReps[(int32)ENetFields_Private::Quantity].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AELSSWeaponThrow"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELSSWeaponThrow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
