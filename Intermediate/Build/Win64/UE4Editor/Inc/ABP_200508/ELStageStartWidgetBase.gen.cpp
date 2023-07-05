// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELStageStartWidgetBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELStageStartWidgetBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELStageStartWidgetBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELStageStartWidgetBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerLayoutSceneWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	DEFINE_FUNCTION(UELStageStartWidgetBase::execGetMovieNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMovieNo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStageStartWidgetBase::execGetTextBlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetTextBlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELStageStartWidgetBase::execGetTextSubject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetTextSubject();
		P_NATIVE_END;
	}
	void UELStageStartWidgetBase::StaticRegisterNativesUELStageStartWidgetBase()
	{
		UClass* Class = UELStageStartWidgetBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMovieNo", &UELStageStartWidgetBase::execGetMovieNo },
			{ "GetTextBlock", &UELStageStartWidgetBase::execGetTextBlock },
			{ "GetTextSubject", &UELStageStartWidgetBase::execGetTextSubject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo_Statics
	{
		struct ELStageStartWidgetBase_eventGetMovieNo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStageStartWidgetBase_eventGetMovieNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStageStartWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStageStartWidgetBase, nullptr, "GetMovieNo", nullptr, nullptr, sizeof(ELStageStartWidgetBase_eventGetMovieNo_Parms), Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock_Statics
	{
		struct ELStageStartWidgetBase_eventGetTextBlock_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStageStartWidgetBase_eventGetTextBlock_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStageStartWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStageStartWidgetBase, nullptr, "GetTextBlock", nullptr, nullptr, sizeof(ELStageStartWidgetBase_eventGetTextBlock_Parms), Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject_Statics
	{
		struct ELStageStartWidgetBase_eventGetTextSubject_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELStageStartWidgetBase_eventGetTextSubject_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELStageStartWidgetBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELStageStartWidgetBase, nullptr, "GetTextSubject", nullptr, nullptr, sizeof(ELStageStartWidgetBase_eventGetTextSubject_Parms), Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELStageStartWidgetBase_NoRegister()
	{
		return UELStageStartWidgetBase::StaticClass();
	}
	struct Z_Construct_UClass_UELStageStartWidgetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELStageStartWidgetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELCareerLayoutSceneWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELStageStartWidgetBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELStageStartWidgetBase_GetMovieNo, "GetMovieNo" }, // 2518613725
		{ &Z_Construct_UFunction_UELStageStartWidgetBase_GetTextBlock, "GetTextBlock" }, // 2867409346
		{ &Z_Construct_UFunction_UELStageStartWidgetBase_GetTextSubject, "GetTextSubject" }, // 1978336555
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELStageStartWidgetBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELStageStartWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELStageStartWidgetBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELStageStartWidgetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELStageStartWidgetBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELStageStartWidgetBase_Statics::ClassParams = {
		&UELStageStartWidgetBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELStageStartWidgetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELStageStartWidgetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELStageStartWidgetBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELStageStartWidgetBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELStageStartWidgetBase, 1870218740);
	template<> ABP_200508_API UClass* StaticClass<UELStageStartWidgetBase>()
	{
		return UELStageStartWidgetBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELStageStartWidgetBase(Z_Construct_UClass_UELStageStartWidgetBase, &UELStageStartWidgetBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELStageStartWidgetBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELStageStartWidgetBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
