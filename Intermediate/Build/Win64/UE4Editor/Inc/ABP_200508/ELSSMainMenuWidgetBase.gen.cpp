// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSMainMenuWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSMainMenuWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSMainMenuWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSMainMenuWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELMainMenuWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELSSMainMenuWidgetBase::execUpdateTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_inDeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateTick(Z_Param_inDeltaSeconds);
		P_NATIVE_END;
	}
	static FName NAME_UELSSMainMenuWidgetBase_StartPlaySSMode = FName(TEXT("StartPlaySSMode"));
	void UELSSMainMenuWidgetBase::StartPlaySSMode()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSMainMenuWidgetBase_StartPlaySSMode),NULL);
	}
	void UELSSMainMenuWidgetBase::StaticRegisterNativesUELSSMainMenuWidgetBase()
	{
		UClass* Class = UELSSMainMenuWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateTick", &UELSSMainMenuWidgetBase::execUpdateTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSMainMenuWidgetBase_StartPlaySSMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSMainMenuWidgetBase_StartPlaySSMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSMainMenuWidgetBase_StartPlaySSMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSMainMenuWidgetBase, nullptr, "StartPlaySSMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSMainMenuWidgetBase_StartPlaySSMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSMainMenuWidgetBase_StartPlaySSMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSMainMenuWidgetBase_StartPlaySSMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSMainMenuWidgetBase_StartPlaySSMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick_Statics
	{
		struct ELSSMainMenuWidgetBase_eventUpdateTick_Parms
		{
			float inDeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_inDeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick_Statics::NewProp_inDeltaSeconds = { "inDeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSMainMenuWidgetBase_eventUpdateTick_Parms, inDeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick_Statics::NewProp_inDeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSMainMenuWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSMainMenuWidgetBase, nullptr, "UpdateTick", nullptr, nullptr, sizeof(ELSSMainMenuWidgetBase_eventUpdateTick_Parms), Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSMainMenuWidgetBase_NoRegister()
	{
		return UELSSMainMenuWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSMainMenuWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSMainMenuWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELMainMenuWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSMainMenuWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSMainMenuWidgetBase_StartPlaySSMode, "StartPlaySSMode" }, // 657933277
		{ &Z_Construct_UFunction_UELSSMainMenuWidgetBase_UpdateTick, "UpdateTick" }, // 926859686
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSMainMenuWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSMainMenuWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSMainMenuWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSMainMenuWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSMainMenuWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSMainMenuWidgetBase_Statics::ClassParams = {
		&UELSSMainMenuWidgetBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSMainMenuWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSMainMenuWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSMainMenuWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSMainMenuWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSMainMenuWidgetBase, 1636968960);
	template<> ABP_200508_API UClass* StaticClass<UELSSMainMenuWidgetBase>()
	{
		return UELSSMainMenuWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSMainMenuWidgetBase(Z_Construct_UClass_UELSSMainMenuWidgetBase, &UELSSMainMenuWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSMainMenuWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSMainMenuWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
