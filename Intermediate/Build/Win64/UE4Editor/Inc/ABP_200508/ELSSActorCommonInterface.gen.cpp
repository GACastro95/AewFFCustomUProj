// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSActorCommonInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSActorCommonInterface() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSActorCommonInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSActorType();
// End Cross Module References
	DEFINE_FUNCTION(IELSSActorCommonInterface::execGetSSActorType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESSActorType*)Z_Param__Result=P_THIS->GetSSActorType_Implementation();
		P_NATIVE_END;
	}
	ESSActorType IELSSActorCommonInterface::GetSSActorType() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSSActorType instead.");
		ELSSActorCommonInterface_eventGetSSActorType_Parms Parms;
		return Parms.ReturnValue;
	}
	void UELSSActorCommonInterface::StaticRegisterNativesUELSSActorCommonInterface()
	{
		UClass* Class = UELSSActorCommonInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSSActorType", &IELSSActorCommonInterface::execGetSSActorType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSActorCommonInterface_eventGetSSActorType_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ESSActorType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSActorCommonInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSActorCommonInterface, nullptr, "GetSSActorType", nullptr, nullptr, sizeof(ELSSActorCommonInterface_eventGetSSActorType_Parms), Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSActorCommonInterface_NoRegister()
	{
		return UELSSActorCommonInterface::StaticClass();
	}
	struct Z_Construct_UClass_UELSSActorCommonInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSActorCommonInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSActorCommonInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSActorCommonInterface_GetSSActorType, "GetSSActorType" }, // 2624423920
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSActorCommonInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSActorCommonInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSActorCommonInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IELSSActorCommonInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSActorCommonInterface_Statics::ClassParams = {
		&UELSSActorCommonInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSActorCommonInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSActorCommonInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSActorCommonInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSActorCommonInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSActorCommonInterface, 856126605);
	template<> ABP_200508_API UClass* StaticClass<UELSSActorCommonInterface>()
	{
		return UELSSActorCommonInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSActorCommonInterface(Z_Construct_UClass_UELSSActorCommonInterface, &UELSSActorCommonInterface::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSActorCommonInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSActorCommonInterface);
	static FName NAME_UELSSActorCommonInterface_GetSSActorType = FName(TEXT("GetSSActorType"));
	ESSActorType IELSSActorCommonInterface::Execute_GetSSActorType(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UELSSActorCommonInterface::StaticClass()));
		ELSSActorCommonInterface_eventGetSSActorType_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UELSSActorCommonInterface_GetSSActorType);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IELSSActorCommonInterface*)(O->GetNativeInterfaceAddress(UELSSActorCommonInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSSActorType_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
