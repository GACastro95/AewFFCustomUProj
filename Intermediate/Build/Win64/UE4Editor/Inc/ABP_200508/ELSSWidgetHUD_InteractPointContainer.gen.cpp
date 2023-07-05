// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetHUD_InteractPointContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetHUD_InteractPointContainer() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UELSSWidgetHUD_InteractPointContainer::execApplyInteractPoint)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyInteractPoint(Z_Param_InActor,Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InteractPointContainer::execSetVisibleContainer)
	{
		P_GET_UBOOL(Z_Param_inIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVisibleContainer(Z_Param_inIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELSSWidgetHUD_InteractPointContainer::execUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update(Z_Param_InDeltaTime);
		P_NATIVE_END;
	}
	void UELSSWidgetHUD_InteractPointContainer::StaticRegisterNativesUELSSWidgetHUD_InteractPointContainer()
	{
		UClass* Class = UELSSWidgetHUD_InteractPointContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyInteractPoint", &UELSSWidgetHUD_InteractPointContainer::execApplyInteractPoint },
			{ "SetVisibleContainer", &UELSSWidgetHUD_InteractPointContainer::execSetVisibleContainer },
			{ "Update", &UELSSWidgetHUD_InteractPointContainer::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics
	{
		struct ELSSWidgetHUD_InteractPointContainer_eventApplyInteractPoint_Parms
		{
			AActor* InActor;
			bool inIsVisible;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InteractPointContainer_eventApplyInteractPoint_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_InteractPointContainer_eventApplyInteractPoint_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_InteractPointContainer_eventApplyInteractPoint_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::NewProp_InActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPointContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer, nullptr, "ApplyInteractPoint", nullptr, nullptr, sizeof(ELSSWidgetHUD_InteractPointContainer_eventApplyInteractPoint_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics
	{
		struct ELSSWidgetHUD_InteractPointContainer_eventSetVisibleContainer_Parms
		{
			bool inIsVisible;
		};
		static void NewProp_inIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inIsVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::NewProp_inIsVisible_SetBit(void* Obj)
	{
		((ELSSWidgetHUD_InteractPointContainer_eventSetVisibleContainer_Parms*)Obj)->inIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::NewProp_inIsVisible = { "inIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetHUD_InteractPointContainer_eventSetVisibleContainer_Parms), &Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::NewProp_inIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::NewProp_inIsVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPointContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer, nullptr, "SetVisibleContainer", nullptr, nullptr, sizeof(ELSSWidgetHUD_InteractPointContainer_eventSetVisibleContainer_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update_Statics
	{
		struct ELSSWidgetHUD_InteractPointContainer_eventUpdate_Parms
		{
			float InDeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetHUD_InteractPointContainer_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPointContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetHUD_InteractPointContainer_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_NoRegister()
	{
		return UELSSWidgetHUD_InteractPointContainer::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractPointArray_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractPointArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractPointArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractPointArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_ApplyInteractPoint, "ApplyInteractPoint" }, // 2007197738
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_SetVisibleContainer, "SetVisibleContainer" }, // 2921471816
		{ &Z_Construct_UFunction_UELSSWidgetHUD_InteractPointContainer_Update, "Update" }, // 544373480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetHUD_InteractPointContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPointContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::NewProp_InteractPointArray_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InteractPointContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPointContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::NewProp_InteractPointArray_Inner = { "InteractPointArray", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::NewProp_InteractPointArray_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::NewProp_InteractPointArray_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::NewProp_InteractPointArray_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELSSWidgetHUD_InteractPointContainer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetHUD_InteractPointContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::NewProp_InteractPointArray = { "InteractPointArray", nullptr, (EPropertyFlags)0x002008800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELSSWidgetHUD_InteractPointContainer, InteractPointArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::NewProp_InteractPointArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::NewProp_InteractPointArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::NewProp_InteractPointArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::NewProp_InteractPointArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetHUD_InteractPointContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::ClassParams = {
		&UELSSWidgetHUD_InteractPointContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetHUD_InteractPointContainer, 1984428226);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetHUD_InteractPointContainer>()
	{
		return UELSSWidgetHUD_InteractPointContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetHUD_InteractPointContainer(Z_Construct_UClass_UELSSWidgetHUD_InteractPointContainer, &UELSSWidgetHUD_InteractPointContainer::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetHUD_InteractPointContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetHUD_InteractPointContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
