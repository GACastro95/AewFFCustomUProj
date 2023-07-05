// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELGaugeStatusIcon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELGaugeStatusIcon() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELGaugeStatusIcon_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELGaugeStatusIcon();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELGaugeStatusIcon::execSetNativeParam)
	{
		P_GET_OBJECT(UWidgetAnimation,Z_Param_Out);
		P_GET_OBJECT(UWidgetAnimation,Z_Param_In);
		P_GET_OBJECT(UImage,Z_Param_Icon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNativeParam(Z_Param_Out,Z_Param_In,Z_Param_Icon);
		P_NATIVE_END;
	}
	void UELGaugeStatusIcon::StaticRegisterNativesUELGaugeStatusIcon()
	{
		UClass* Class = UELGaugeStatusIcon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNativeParam", &UELGaugeStatusIcon::execSetNativeParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics
	{
		struct ELGaugeStatusIcon_eventSetNativeParam_Parms
		{
			UWidgetAnimation* Out;
			UWidgetAnimation* In;
			UImage* Icon;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Out;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_In;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Icon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGaugeStatusIcon_eventSetNativeParam_Parms, Out), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGaugeStatusIcon_eventSetNativeParam_Parms, In), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::NewProp_Icon_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELGaugeStatusIcon_eventSetNativeParam_Parms, Icon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::NewProp_Icon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::NewProp_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::NewProp_In,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::NewProp_Icon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELGaugeStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELGaugeStatusIcon, nullptr, "SetNativeParam", nullptr, nullptr, sizeof(ELGaugeStatusIcon_eventSetNativeParam_Parms), Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELGaugeStatusIcon_NoRegister()
	{
		return UELGaugeStatusIcon::StaticClass();
	}
	struct Z_Construct_UClass_UELGaugeStatusIcon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tex_KO_N_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Tex_KO_N;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELGaugeStatusIcon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELGaugeStatusIcon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELGaugeStatusIcon_SetNativeParam, "SetNativeParam" }, // 1530985746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGaugeStatusIcon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELGaugeStatusIcon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELGaugeStatusIcon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELGaugeStatusIcon_Statics::NewProp_Tex_KO_N_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELGaugeStatusIcon" },
		{ "ModuleRelativePath", "Public/ELGaugeStatusIcon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELGaugeStatusIcon_Statics::NewProp_Tex_KO_N = { "Tex_KO_N", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELGaugeStatusIcon, Tex_KO_N), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELGaugeStatusIcon_Statics::NewProp_Tex_KO_N_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELGaugeStatusIcon_Statics::NewProp_Tex_KO_N_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELGaugeStatusIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELGaugeStatusIcon_Statics::NewProp_Tex_KO_N,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELGaugeStatusIcon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELGaugeStatusIcon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELGaugeStatusIcon_Statics::ClassParams = {
		&UELGaugeStatusIcon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELGaugeStatusIcon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELGaugeStatusIcon_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELGaugeStatusIcon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELGaugeStatusIcon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELGaugeStatusIcon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELGaugeStatusIcon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELGaugeStatusIcon, 1558654696);
	template<> ABP_200508_API UClass* StaticClass<UELGaugeStatusIcon>()
	{
		return UELGaugeStatusIcon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELGaugeStatusIcon(Z_Construct_UClass_UELGaugeStatusIcon, &UELGaugeStatusIcon::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELGaugeStatusIcon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELGaugeStatusIcon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
