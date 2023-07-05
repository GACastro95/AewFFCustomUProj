// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELFindMiniGameWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELFindMiniGameWidget() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELFindMiniGameWidget_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELFindMiniGameWidget();
	ELITE_GAME_API UClass* Z_Construct_UClass_UELUserWidget();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	DEFINE_FUNCTION(UELFindMiniGameWidget::execGetTexture2DPixelColor)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_PROPERTY(FFloatProperty,Z_Param_U);
		P_GET_PROPERTY(FFloatProperty,Z_Param_V);
		P_GET_STRUCT_REF(FColor,Z_Param_Out_OutColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTexture2DPixelColor(Z_Param_Texture,Z_Param_U,Z_Param_V,Z_Param_Out_OutColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELFindMiniGameWidget::execGetTexture2DPixelColorAll)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_TARRAY_REF(FColor,Z_Param_Out_OutColorList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTexture2DPixelColorAll(Z_Param_Texture,Z_Param_Out_OutColorList);
		P_NATIVE_END;
	}
	void UELFindMiniGameWidget::StaticRegisterNativesUELFindMiniGameWidget()
	{
		UClass* Class = UELFindMiniGameWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTexture2DPixelColor", &UELFindMiniGameWidget::execGetTexture2DPixelColor },
			{ "GetTexture2DPixelColorAll", &UELFindMiniGameWidget::execGetTexture2DPixelColorAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics
	{
		struct ELFindMiniGameWidget_eventGetTexture2DPixelColor_Parms
		{
			UTexture2D* Texture;
			float U;
			float V;
			FColor OutColor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_U;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_V;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELFindMiniGameWidget_eventGetTexture2DPixelColor_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::NewProp_U = { "U", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELFindMiniGameWidget_eventGetTexture2DPixelColor_Parms, U), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::NewProp_V = { "V", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELFindMiniGameWidget_eventGetTexture2DPixelColor_Parms, V), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::NewProp_OutColor = { "OutColor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELFindMiniGameWidget_eventGetTexture2DPixelColor_Parms, OutColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::NewProp_U,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::NewProp_V,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::NewProp_OutColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELFindMiniGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELFindMiniGameWidget, nullptr, "GetTexture2DPixelColor", nullptr, nullptr, sizeof(ELFindMiniGameWidget_eventGetTexture2DPixelColor_Parms), Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics
	{
		struct ELFindMiniGameWidget_eventGetTexture2DPixelColorAll_Parms
		{
			UTexture2D* Texture;
			TArray<FColor> OutColorList;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutColorList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutColorList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELFindMiniGameWidget_eventGetTexture2DPixelColorAll_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::NewProp_OutColorList_Inner = { "OutColorList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::NewProp_OutColorList = { "OutColorList", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELFindMiniGameWidget_eventGetTexture2DPixelColorAll_Parms, OutColorList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::NewProp_Texture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::NewProp_OutColorList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::NewProp_OutColorList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELFindMiniGameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELFindMiniGameWidget, nullptr, "GetTexture2DPixelColorAll", nullptr, nullptr, sizeof(ELFindMiniGameWidget_eventGetTexture2DPixelColorAll_Parms), Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELFindMiniGameWidget_NoRegister()
	{
		return UELFindMiniGameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UELFindMiniGameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELFindMiniGameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELFindMiniGameWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColor, "GetTexture2DPixelColor" }, // 2421083408
		{ &Z_Construct_UFunction_UELFindMiniGameWidget_GetTexture2DPixelColorAll, "GetTexture2DPixelColorAll" }, // 610553777
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELFindMiniGameWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELFindMiniGameWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELFindMiniGameWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELFindMiniGameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELFindMiniGameWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELFindMiniGameWidget_Statics::ClassParams = {
		&UELFindMiniGameWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELFindMiniGameWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELFindMiniGameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELFindMiniGameWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELFindMiniGameWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELFindMiniGameWidget, 2933282596);
	template<> ABP_200508_API UClass* StaticClass<UELFindMiniGameWidget>()
	{
		return UELFindMiniGameWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELFindMiniGameWidget(Z_Construct_UClass_UELFindMiniGameWidget, &UELFindMiniGameWidget::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELFindMiniGameWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELFindMiniGameWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
