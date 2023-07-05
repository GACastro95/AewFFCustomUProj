// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSCompleteUseItemState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSCompleteUseItemState() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCompleteUseItemState_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSCompleteUseItemState();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActionStateBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELSSCompleteUseItemState::execUseItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItem();
		P_NATIVE_END;
	}
	void UELSSCompleteUseItemState::StaticRegisterNativesUELSSCompleteUseItemState()
	{
		UClass* Class = UELSSCompleteUseItemState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UseItem", &UELSSCompleteUseItemState::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSCompleteUseItemState_UseItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSCompleteUseItemState_UseItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSCompleteUseItemState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSCompleteUseItemState_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSCompleteUseItemState, nullptr, "UseItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSCompleteUseItemState_UseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSCompleteUseItemState_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSCompleteUseItemState_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSCompleteUseItemState_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSCompleteUseItemState_NoRegister()
	{
		return UELSSCompleteUseItemState::StaticClass();
	}
	struct Z_Construct_UClass_UELSSCompleteUseItemState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseItemDelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UseItemDelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSCompleteUseItemState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSActionStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSCompleteUseItemState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSCompleteUseItemState_UseItem, "UseItem" }, // 2715574906
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCompleteUseItemState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSCompleteUseItemState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSCompleteUseItemState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSCompleteUseItemState_Statics::NewProp_UseItemDelayTime_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSCompleteUseItemState" },
		{ "ModuleRelativePath", "Public/ELSSCompleteUseItemState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELSSCompleteUseItemState_Statics::NewProp_UseItemDelayTime = { "UseItemDelayTime", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSCompleteUseItemState, UseItemDelayTime), METADATA_PARAMS(Z_Construct_UClass_UELSSCompleteUseItemState_Statics::NewProp_UseItemDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCompleteUseItemState_Statics::NewProp_UseItemDelayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSCompleteUseItemState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSCompleteUseItemState_Statics::NewProp_UseItemDelayTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSCompleteUseItemState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSCompleteUseItemState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSCompleteUseItemState_Statics::ClassParams = {
		&UELSSCompleteUseItemState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSCompleteUseItemState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCompleteUseItemState_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSCompleteUseItemState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSCompleteUseItemState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSCompleteUseItemState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSCompleteUseItemState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSCompleteUseItemState, 3918691412);
	template<> ABP_200508_API UClass* StaticClass<UELSSCompleteUseItemState>()
	{
		return UELSSCompleteUseItemState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSCompleteUseItemState(Z_Construct_UClass_UELSSCompleteUseItemState, &UELSSCompleteUseItemState::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSCompleteUseItemState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSCompleteUseItemState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
