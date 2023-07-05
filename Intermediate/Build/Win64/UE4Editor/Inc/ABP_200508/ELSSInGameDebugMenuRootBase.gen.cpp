// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSInGameDebugMenuRootBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSInGameDebugMenuRootBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenuRootBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSInGameDebugMenuRootBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELDebugMenuRootBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELSSInGameDebugMenuRootBase::execSetDebugMenuInputMode)
	{
		P_GET_UBOOL(Z_Param_inEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDebugMenuInputMode(Z_Param_inEnable);
		P_NATIVE_END;
	}
	void UELSSInGameDebugMenuRootBase::StaticRegisterNativesUELSSInGameDebugMenuRootBase()
	{
		UClass* Class = UELSSInGameDebugMenuRootBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDebugMenuInputMode", &UELSSInGameDebugMenuRootBase::execSetDebugMenuInputMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics
	{
		struct ELSSInGameDebugMenuRootBase_eventSetDebugMenuInputMode_Parms
		{
			bool inEnable;
		};
		static void NewProp_inEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::NewProp_inEnable_SetBit(void* Obj)
	{
		((ELSSInGameDebugMenuRootBase_eventSetDebugMenuInputMode_Parms*)Obj)->inEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::NewProp_inEnable = { "inEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSInGameDebugMenuRootBase_eventSetDebugMenuInputMode_Parms), &Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::NewProp_inEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::NewProp_inEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSInGameDebugMenuRootBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSInGameDebugMenuRootBase, nullptr, "SetDebugMenuInputMode", nullptr, nullptr, sizeof(ELSSInGameDebugMenuRootBase_eventSetDebugMenuInputMode_Parms), Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSInGameDebugMenuRootBase_NoRegister()
	{
		return UELSSInGameDebugMenuRootBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSInGameDebugMenuRootBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSInGameDebugMenuRootBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELDebugMenuRootBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSInGameDebugMenuRootBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSInGameDebugMenuRootBase_SetDebugMenuInputMode, "SetDebugMenuInputMode" }, // 2638595977
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSInGameDebugMenuRootBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSInGameDebugMenuRootBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSInGameDebugMenuRootBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSInGameDebugMenuRootBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSInGameDebugMenuRootBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSInGameDebugMenuRootBase_Statics::ClassParams = {
		&UELSSInGameDebugMenuRootBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSInGameDebugMenuRootBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSInGameDebugMenuRootBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSInGameDebugMenuRootBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSInGameDebugMenuRootBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSInGameDebugMenuRootBase, 2442998711);
	template<> ABP_200508_API UClass* StaticClass<UELSSInGameDebugMenuRootBase>()
	{
		return UELSSInGameDebugMenuRootBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSInGameDebugMenuRootBase(Z_Construct_UClass_UELSSInGameDebugMenuRootBase, &UELSSInGameDebugMenuRootBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSInGameDebugMenuRootBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSInGameDebugMenuRootBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
